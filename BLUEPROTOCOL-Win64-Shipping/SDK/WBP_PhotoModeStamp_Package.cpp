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
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWBP_PhotoModeStamp_C::GetText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.GetText");
		
		UWBP_PhotoModeStamp_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PhotoModeStamp_C::InitStamp(int32_t StampId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitStamp");
		
		UWBP_PhotoModeStamp_C_InitStamp_Params params {};
		params.StampId = StampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_PhotoModeStamp_C::InitText(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitText");
		
		UWBP_PhotoModeStamp_C_InitText_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.BndEvt__WBP_PhotoModeStamp_SBSelectableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PhotoModeStamp_C::BndEvt__WBP_PhotoModeStamp_SBSelectableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.BndEvt__WBP_PhotoModeStamp_SBSelectableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_PhotoModeStamp_C_BndEvt__WBP_PhotoModeStamp_SBSelectableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PhotoModeStamp_C::SetAlpha(float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetAlpha");
		
		UWBP_PhotoModeStamp_C_SetAlpha_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetReverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReverse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PhotoModeStamp_C::SetReverse(bool bReverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetReverse");
		
		UWBP_PhotoModeStamp_C_SetReverse_Params params {};
		params.bReverse = bReverse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PhotoModeStamp_C::SetSelected(bool bSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetSelected");
		
		UWBP_PhotoModeStamp_C_SetSelected_Params params {};
		params.bSelect = bSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_PhotoModeStamp_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.Construct");
		
		UWBP_PhotoModeStamp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnPrepareScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PhotoModeStamp_C::OnPrepareScreenshot(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnPrepareScreenshot");
		
		UWBP_PhotoModeStamp_C_OnPrepareScreenshot_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnFinishScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PhotoModeStamp_C::OnFinishScreenshot(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnFinishScreenshot");
		
		UWBP_PhotoModeStamp_C_OnFinishScreenshot_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_PhotoModeStamp_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.Destruct");
		
		UWBP_PhotoModeStamp_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.UpdateButtonSize
	 * 		Flags  -> ()
	 */
	void UWBP_PhotoModeStamp_C::UpdateButtonSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.UpdateButtonSize");
		
		UWBP_PhotoModeStamp_C_UpdateButtonSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PhotoModeStamp_C::InitVisibility(bool bIsImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitVisibility");
		
		UWBP_PhotoModeStamp_C_InitVisibility_Params params {};
		params.bIsImage = bIsImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.ExecuteUbergraph_WBP_PhotoModeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PhotoModeStamp_C::ExecuteUbergraph_WBP_PhotoModeStamp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.ExecuteUbergraph_WBP_PhotoModeStamp");
		
		UWBP_PhotoModeStamp_C_ExecuteUbergraph_WBP_PhotoModeStamp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStamp_C*                       Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PhotoModeStamp_C::OnClicked__DelegateSignature(class UWBP_PhotoModeStamp_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnClicked__DelegateSignature");
		
		UWBP_PhotoModeStamp_C_OnClicked__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PhotoModeStamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PhotoModeStamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PhotoModeStamp.WBP_PhotoModeStamp_C");
		return ptr;
	}

}


