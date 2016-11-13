close all; clear all; clc;
%% Image Load
Load_Img=imread('president.jpg');
%color=size(Load_Img,3);

%% Image Processing

%Gray_Img=rgb2gray(Load_Img);
Gray_Img=Load_Img;

  level = graythresh(Gray_Img);
  BW = im2bw(Gray_Img,level);
  figure(1)
  imshow(BW);