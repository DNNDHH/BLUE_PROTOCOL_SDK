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
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USound_ControlItem_C::SetText(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.SetText");
		
		USound_ControlItem_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.SetLabelTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USound_ControlItem_C::SetLabelTextId(int32_t TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.SetLabelTextId");
		
		USound_ControlItem_C_SetLabelTextId_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.GetRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USound_ControlItem_C::GetRate(float* Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.GetRate");
		
		USound_ControlItem_C_GetRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rate != nullptr)
			*Rate = params.Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.UpdateBtn
	 * 		Flags  -> ()
	 */
	void USound_ControlItem_C::UpdateBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.UpdateBtn");
		
		USound_ControlItem_C_UpdateBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.SetVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMute                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USound_ControlItem_C::SetVolume(int32_t Volume, bool bMute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.SetVolume");
		
		USound_ControlItem_C_SetVolume_Params params {};
		params.Volume = Volume;
		params.bMute = bMute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USound_ControlItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.PreConstruct");
		
		USound_ControlItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USound_ControlItem_C::BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		USound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USound_ControlItem_C::BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature");
		
		USound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USound_ControlItem_C::BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature");
		
		USound_ControlItem_C_BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USound_ControlItem_C::BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");
		
		USound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.RequestSound
	 * 		Flags  -> ()
	 */
	void USound_ControlItem_C::RequestSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.RequestSound");
		
		USound_ControlItem_C_RequestSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USound_ControlItem_C::BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature");
		
		USound_ControlItem_C_BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USound_ControlItem_C::BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature");
		
		USound_ControlItem_C_BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USound_ControlItem_C::BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");
		
		USound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.ExecuteUbergraph_Sound_ControlItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USound_ControlItem_C::ExecuteUbergraph_Sound_ControlItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.ExecuteUbergraph_Sound_ControlItem");
		
		USound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.RequestSoundEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USound_ControlItem_C::RequestSoundEvent__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.RequestSoundEvent__DelegateSignature");
		
		USound_ControlItem_C_RequestSoundEvent__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sound_ControlItem.Sound_ControlItem_C.ValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMute                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USound_ControlItem_C::ValueChanged__DelegateSignature(int32_t Index, int32_t Volume, bool bMute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sound_ControlItem.Sound_ControlItem_C.ValueChanged__DelegateSignature");
		
		USound_ControlItem_C_ValueChanged__DelegateSignature_Params params {};
		params.Index = Index;
		params.Volume = Volume;
		params.bMute = bMute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USound_ControlItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USound_ControlItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Sound_ControlItem.Sound_ControlItem_C");
		return ptr;
	}

}


