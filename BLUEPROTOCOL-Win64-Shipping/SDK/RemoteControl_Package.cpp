/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlLevelIndependantBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlLevelIndependantBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlLevelIndependantBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlLevelDependantBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlLevelDependantBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlLevelDependantBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlExposeRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlExposeRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlExposeRegistry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteControl.RemoteControlFunctionLibrary.ExposeProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URemoteControlPreset*                        Preset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     SourceObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Property                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRemoteControlOptionalExposeArgs            Args                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	bool URemoteControlFunctionLibrary::ExposeProperty(class URemoteControlPreset* Preset, class UObject* SourceObject, const class FString& Property, const struct FRemoteControlOptionalExposeArgs& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteControl.RemoteControlFunctionLibrary.ExposeProperty");
		
		URemoteControlFunctionLibrary_ExposeProperty_Params params {};
		params.Preset = Preset;
		params.SourceObject = SourceObject;
		params.Property = Property;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteControl.RemoteControlFunctionLibrary.ExposeFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URemoteControlPreset*                        Preset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     SourceObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Function                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRemoteControlOptionalExposeArgs            Args                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	bool URemoteControlFunctionLibrary::ExposeFunction(class URemoteControlPreset* Preset, class UObject* SourceObject, const class FString& Function, const struct FRemoteControlOptionalExposeArgs& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteControl.RemoteControlFunctionLibrary.ExposeFunction");
		
		URemoteControlFunctionLibrary_ExposeFunction_Params params {};
		params.Preset = Preset;
		params.SourceObject = SourceObject;
		params.Function = Function;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteControl.RemoteControlFunctionLibrary.ExposeActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URemoteControlPreset*                        Preset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRemoteControlOptionalExposeArgs            Args                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	bool URemoteControlFunctionLibrary::ExposeActor(class URemoteControlPreset* Preset, class AActor* Actor, const struct FRemoteControlOptionalExposeArgs& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteControl.RemoteControlFunctionLibrary.ExposeActor");
		
		URemoteControlFunctionLibrary_ExposeActor_Params params {};
		params.Preset = Preset;
		params.Actor = Actor;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RemoteControl.RemoteControlInterceptionTestObject.TestFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteControlInterceptionFunctionParamStruct InStruct                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InTestFactor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRemoteControlInterceptionFunctionParamStruct URemoteControlInterceptionTestObject::TestFunction(const struct FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RemoteControl.RemoteControlInterceptionTestObject.TestFunction");
		
		URemoteControlInterceptionTestObject_TestFunction_Params params {};
		params.InStruct = InStruct;
		params.InTestFactor = InTestFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlInterceptionTestObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlInterceptionTestObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlInterceptionTestObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARemoteControlPresetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARemoteControlPresetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlPresetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlAPITestObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlAPITestObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlAPITestObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoteControlTestObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteControlTestObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteControl.RemoteControlTestObject");
		return ptr;
	}

}


