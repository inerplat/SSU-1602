close all; clear all; clc;
%% Image Load
Load_Img=imread('test1.jpg');
%color=size(Load_Img,3);

%% Image Processing

%Gray_Img=rgb2gray(Load_Img);
global Gray_Img
Gray_Img=Load_Img;
[height width]=size(Gray_Img);

global img_chk;
for i=1:height
    for j=1:width
        img_chk(i,j)=0;
        for k=1:3
            color_img(i,j,k)=0;
        end
    end
end

k=10;
for i=1:height
    for j=1:width
        if Gray_Img(i,j) == 1
            if img_chk(i,j)==0
                img_chk(i,j)=1;
                back(i,j,k);
                k=k+10;
            end
        end
    end
end
for i=1:10
    for j=1:3
        color(i,j)=randi(255,1,1);
    end
end
color_img=uint8(height*width*3);
for i=1:height
    for j=1:width
        if Gray_Img(i,j) ~= 0
            for k=1:3
                color_img(i,j,k) = color(Gray_Img(i,j)/10,k);
            end
        end
    end
end
for i=1:height
    for j=1:width
       if Load_Img(i,j)==1
           Load_Img(i,j)=255;
       end
    end
end

set(0,'DefaultFigureWindowStyle','docked');
figure(1)
imshow(Load_Img);
figure(2)
imshow(Gray_Img);
figure(3)
imshow(color_img);
            


%% Image Show
%set(0,'DefaultFigureWindowStyle','docked');
