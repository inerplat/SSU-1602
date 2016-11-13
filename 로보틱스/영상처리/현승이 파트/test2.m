close all; clear all; clc;
%% Image Load
Load_Img=imread('어린이날.jpeg');
color=size(Load_Img,3);

%% Image Processing
[height width temp]=size(Load_Img);

Cutted_height=height/2;
Cutted_width=width/2;


%%  Replication
for i=1:2:height
    for j=1:2:width
        for k=1:3
            Expanded_Img1(i*2,j*2,k)=Load_Img(i,j,k);
            Expanded_Img1(i*2+1,j*2,k)=Load_Img(i,j,k);
            Expanded_Img1(i*2,j*2+1,k)=Load_Img(i,j,k);
            Expanded_Img1(i*2+1,j*2+1,k)=Load_Img(i,j,k);
        end
    end
end


for i=1:height
    for j=1:width
        for k=1:3
            Expanded_Img2(i,j,k)=Load_Img(i,j,k);
            Expanded_Img2(i+1,j,k)=Load_Img(i,j,k);
            Expanded_Img2(i,j+1,k)=Load_Img(i,j,k);
            Expanded_Img2(i+1,j+1,k)=Load_Img(i,j,k);
        end
    end
end
            

%% Image Show
set(0,'DefaultFigureWindowStyle','docked');
figure(1)
imshow(Load_Img);
figure(2)
imshow(Expanded_Img1);
