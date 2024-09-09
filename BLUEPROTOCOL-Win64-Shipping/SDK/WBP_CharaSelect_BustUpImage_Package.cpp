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
	 * 		Name   -> Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_CharacterSelectCaptureBustUp_C*          CharacterSelectCaptureBustUp                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharaSelect_BustUpImage_C::SetTarget(class ABP_CharacterSelectCaptureBustUp_C* CharacterSelectCaptureBustUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetTarget");
		
		UWBP_CharaSelect_BustUpImage_C_SetTarget_Params params {};
		params.CharacterSelectCaptureBustUp = CharacterSelectCaptureBustUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharaSelect_BustUpImage_C::Update(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.Update");
		
		UWBP_CharaSelect_BustUpImage_C_Update_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetImage
	 * 		Flags  -> ()
	 */
	void UWBP_CharaSelect_BustUpImage_C::SetImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetImage");
		
		UWBP_CharaSelect_BustUpImage_C_SetImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.PlayFxAnim
	 * 		Flags  -> ()
	 */
	void UWBP_CharaSelect_BustUpImage_C::PlayFxAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.PlayFxAnim");
		
		UWBP_CharaSelect_BustUpImage_C_PlayFxAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.ExecuteUbergraph_WBP_CharaSelect_BustUpImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CharaSelect_BustUpImage_C::ExecuteUbergraph_WBP_CharaSelect_BustUpImage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.ExecuteUbergraph_WBP_CharaSelect_BustUpImage");
		
		UWBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CharaSelect_BustUpImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CharaSelect_BustUpImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C");
		return ptr;
	}

}


