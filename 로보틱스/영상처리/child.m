close all; clear all; clc;
%% Image Load
Load_Img=imread('어린이날.jpeg');
color=size(Load_Img,3);

%% Image Processing
if(color==3)
    Gray_Img=rgb2gray(Load_Img);
end

[height width]=size(Gray_Img);

Copy_Img=uint8(size(Gray_Img));
for i=1:height
    for j=1:width
        Copy_Img(i,j)=Gray_Img(i,j);
    end
end

%% Image Show
set(0,'DefaultFigureWindowStyle','docked');
figure(1)
imshow(Load_Img);
figure(2)
imshow(Gray_Img);
figure(3)
imshow(Copy_Img);
