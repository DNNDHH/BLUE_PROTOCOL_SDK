#pragma once

 

// Package: SBUIExtendRenderer

#include "Basic.hpp"

#include "SBUIExtendRenderer_classes.hpp"
#include "SBUIExtendRenderer_parameters.hpp"


namespace SDK
{

// Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.AddToViewportPrePostProcess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      UserWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Priority                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USBUIExtendRendererBlueprintFunctionLibrary::AddToViewportPrePostProcess(class UUserWidget* UserWidget, const int32 Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBUIExtendRendererBlueprintFunctionLibrary", "AddToViewportPrePostProcess");

	Params::SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Priority = Priority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.RemoveFromParentPrePostProcess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      UserWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USBUIExtendRendererBlueprintFunctionLibrary::RemoveFromParentPrePostProcess(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBUIExtendRendererBlueprintFunctionLibrary", "RemoveFromParentPrePostProcess");

	Params::SBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess Parms{};

	Parms.UserWidget = UserWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.AddToViewportPrePostProcess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      UserWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Priority                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USBUIExtendRendererSubsystem::AddToViewportPrePostProcess(class UUserWidget* UserWidget, const int32 Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBUIExtendRendererSubsystem", "AddToViewportPrePostProcess");

	Params::SBUIExtendRendererSubsystem_AddToViewportPrePostProcess Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Priority = Priority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.RemoveFromParentPrePostProcess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      UserWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USBUIExtendRendererSubsystem::RemoveFromParentPrePostProcess(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBUIExtendRendererSubsystem", "RemoveFromParentPrePostProcess");

	Params::SBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess Parms{};

	Parms.UserWidget = UserWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

