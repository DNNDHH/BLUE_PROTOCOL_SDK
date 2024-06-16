#pragma once

 

// Package: RemoteControl

#include "Basic.hpp"

#include "RemoteControl_classes.hpp"
#include "RemoteControl_parameters.hpp"


namespace SDK
{

// Function RemoteControl.RemoteControlFunctionLibrary.ExposeActor
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class URemoteControlPreset*             Preset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRemoteControlOptionalExposeArgs Args                                                   (Parm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteControlFunctionLibrary::ExposeActor(class URemoteControlPreset* Preset, class AActor* Actor, const struct FRemoteControlOptionalExposeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RemoteControlFunctionLibrary", "ExposeActor");

	Params::RemoteControlFunctionLibrary_ExposeActor Parms{};

	Parms.Preset = Preset;
	Parms.Actor = Actor;
	Parms.Args = std::move(Args);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function RemoteControl.RemoteControlFunctionLibrary.ExposeFunction
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class URemoteControlPreset*             Preset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          SourceObject                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Function                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRemoteControlOptionalExposeArgs Args                                                   (Parm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteControlFunctionLibrary::ExposeFunction(class URemoteControlPreset* Preset, class UObject* SourceObject, const class FString& Function, const struct FRemoteControlOptionalExposeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RemoteControlFunctionLibrary", "ExposeFunction");

	Params::RemoteControlFunctionLibrary_ExposeFunction Parms{};

	Parms.Preset = Preset;
	Parms.SourceObject = SourceObject;
	Parms.Function = std::move(Function);
	Parms.Args = std::move(Args);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function RemoteControl.RemoteControlFunctionLibrary.ExposeProperty
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class URemoteControlPreset*             Preset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          SourceObject                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Property                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRemoteControlOptionalExposeArgs Args                                                   (Parm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteControlFunctionLibrary::ExposeProperty(class URemoteControlPreset* Preset, class UObject* SourceObject, const class FString& Property, const struct FRemoteControlOptionalExposeArgs& Args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RemoteControlFunctionLibrary", "ExposeProperty");

	Params::RemoteControlFunctionLibrary_ExposeProperty Parms{};

	Parms.Preset = Preset;
	Parms.SourceObject = SourceObject;
	Parms.Property = std::move(Property);
	Parms.Args = std::move(Args);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function RemoteControl.RemoteControlInterceptionTestObject.TestFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRemoteControlInterceptionFunctionParamStructInStruct                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   InTestFactor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRemoteControlInterceptionFunctionParamStructReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FRemoteControlInterceptionFunctionParamStruct URemoteControlInterceptionTestObject::TestFunction(const struct FRemoteControlInterceptionFunctionParamStruct& InStruct, int32 InTestFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RemoteControlInterceptionTestObject", "TestFunction");

	Params::RemoteControlInterceptionTestObject_TestFunction Parms{};

	Parms.InStruct = std::move(InStruct);
	Parms.InTestFactor = InTestFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

