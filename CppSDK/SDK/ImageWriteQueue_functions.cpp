#pragma once

 

// Package: ImageWriteQueue

#include "Basic.hpp"

#include "ImageWriteQueue_classes.hpp"
#include "ImageWriteQueue_parameters.hpp"


namespace SDK
{

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture*                         Texture                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageWriteOptions               OPTIONS                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& OPTIONS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ImageWriteBlueprintLibrary", "ExportToDisk");

	Params::ImageWriteBlueprintLibrary_ExportToDisk Parms{};

	Parms.Texture = Texture;
	Parms.Filename = std::move(Filename);
	Parms.OPTIONS = std::move(OPTIONS);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
