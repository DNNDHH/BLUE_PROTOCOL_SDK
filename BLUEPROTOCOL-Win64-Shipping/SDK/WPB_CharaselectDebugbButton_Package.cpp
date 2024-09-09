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
	 * 		Name   -> Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWPB_CharaselectDebugbButton_C::BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWPB_CharaselectDebugbButton_C_BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_CharacterSelectCaptureOne_C*>     CharacterSelectCaptureOne                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWPB_CharaselectDebugbButton_C::Initialize(const class FString& StateName, const class FName& Command, TArray<class ABP_CharacterSelectCaptureOne_C*>* CharacterSelectCaptureOne)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.Initialize");
		
		UWPB_CharaselectDebugbButton_C_Initialize_Params params {};
		params.StateName = StateName;
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterSelectCaptureOne != nullptr)
			*CharacterSelectCaptureOne = params.CharacterSelectCaptureOne;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.ExecuteUbergraph_WPB_CharaselectDebugbButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWPB_CharaselectDebugbButton_C::ExecuteUbergraph_WPB_CharaselectDebugbButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.ExecuteUbergraph_WPB_CharaselectDebugbButton");
		
		UWPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWPB_CharaselectDebugbButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWPB_CharaselectDebugbButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C");
		return ptr;
	}

}


