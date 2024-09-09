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
	 * 		Name   -> Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.GetMouseRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotateValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_PlayerSceneCapture2D_C::GetMouseRotate(class UObject* __WorldContext, bool* bValid, float* RotateValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.GetMouseRotate");
		
		UFLIB_PlayerSceneCapture2D_C_GetMouseRotate_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (RotateValue != nullptr)
			*RotateValue = params.RotateValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.GetAnalogStickRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotateValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_PlayerSceneCapture2D_C::GetAnalogStickRotate(class UObject* __WorldContext, bool* bValid, float* RotateValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.GetAnalogStickRotate");
		
		UFLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (RotateValue != nullptr)
			*RotateValue = params.RotateValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.Find Curr Map Player Avatar Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrMapName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_PlayerSceneCapture2D_C::FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, class UObject* __WorldContext, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.Find Curr Map Player Avatar Transform");
		
		UFLIB_PlayerSceneCapture2D_C_FindCurrMapPlayerAvatarTransform_Params params {};
		params.InCurrMapName = InCurrMapName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.SpawnPlayerCaptureStudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ABP_PlayerSceneCapture2D_Studio_C* UFLIB_PlayerSceneCapture2D_C::SpawnPlayerCaptureStudio(int32_t Priority, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.SpawnPlayerCaptureStudio");
		
		UFLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio_Params params {};
		params.Priority = Priority;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFLIB_PlayerSceneCapture2D_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFLIB_PlayerSceneCapture2D_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C");
		return ptr;
	}

}


