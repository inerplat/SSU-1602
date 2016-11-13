close all; clear all; clc;
%% Image Load
Load_Img=imread('어린이날.jpeg');
color=size(Load_Img,3);

%% Image Processing
[height width temp]=size(Load_Img);

Cutted_height=height/2;
Cutted_width=width/2;

%%  Single pixel selection
for i=1:2:height
    for j=1:2:width
        for k=1:3
            Cutted_Img1((i+1)/2,(j+1)/2,k)=Load_Img(i,j,k);
        end
    end
end

%%  Interpolation
for i=1:2:height
    for j=1:2:width
        for k=1:3
            Cutted_Img2((i+1)/2,(j+1)/2,k)=Load_Img(i,j,k)/4+Load_Img(i+1,j,k)/4+Load_Img(i,j+1,k)/4+Load_Img(i+1,j+1,k)/4;
        end
    end
end

%%  Replication

for i=2:2:height*2
    for j=2:2:width*2
        for k=1:3
            Expanded_Img1(i,j,k)=Load_Img(i/2,j/2,k);
            Expanded_Img1(i+1,j,k)=Load_Img(i/2,j/2,k);
            Expanded_Img1(i,j+1,k)=Load_Img(i/2,j/2,k);
            Expanded_Img1(i+1,j+1,k)=Load_Img(i/2,j/2,k);
        end
    end
end
            

%% Image Show
set(0,'DefaultFigureWindowStyle','docked');
figure(1)
imshow(Load_Img);
figure(2)
imshow(Cutted_Img1);
figure(3)
imshow(Cutted_Img2);
figure(4)
imshow(Expanded_Img1);
