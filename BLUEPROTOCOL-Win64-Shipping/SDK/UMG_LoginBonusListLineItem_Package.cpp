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
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnCloseAnimationFinished
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLineItem_C::OnCloseAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnCloseAnimationFinished");
		
		UUMG_LoginBonusListLineItem_C_OnCloseAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetIconExtraData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               IconWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBLoginBonusWindowItemData                 ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_LoginBonusListLineItem_C::SetIconExtraData(class UCommonIcon_C* IconWidget, const struct FSBLoginBonusWindowItemData& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetIconExtraData");
		
		UUMG_LoginBonusListLineItem_C_SetIconExtraData_Params params {};
		params.IconWidget = IconWidget;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LoginBonusListLineItem_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetBtnSelected");
		
		UUMG_LoginBonusListLineItem_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetMouseClickValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusListLineItem_C::SetMouseClickValue(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetMouseClickValue");
		
		UUMG_LoginBonusListLineItem_C_SetMouseClickValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLoginBonusWindowDayData                  Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               StumpOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Click                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LoginBonusListLineItem_C::SetData(const struct FSBLoginBonusWindowDayData& Data, bool StumpOn, bool Click)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetData");
		
		UUMG_LoginBonusListLineItem_C_SetData_Params params {};
		params.Data = Data;
		params.StumpOn = StumpOn;
		params.Click = Click;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.PlayStumpAnimation
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLineItem_C::PlayStumpAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.PlayStumpAnimation");
		
		UUMG_LoginBonusListLineItem_C_PlayStumpAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusListLineItem_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnAnimationFinished");
		
		UUMG_LoginBonusListLineItem_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLineItem_C::BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_LoginBonusListLineItem_C_BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLineItem_C::BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_LoginBonusListLineItem_C_BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ExecuteUbergraph_UMG_LoginBonusListLineItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusListLineItem_C::ExecuteUbergraph_UMG_LoginBonusListLineItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ExecuteUbergraph_UMG_LoginBonusListLineItem");
		
		UUMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_LoginBonusListLineItem_C*               SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LoginBonusListLineItem_C::ItemClick__DelegateSignature(int32_t ID, class UUMG_LoginBonusListLineItem_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ItemClick__DelegateSignature");
		
		UUMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature_Params params {};
		params.ID = ID;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.StumpAnimationEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LoginBonusListLineItem_C::StumpAnimationEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.StumpAnimationEnd__DelegateSignature");
		
		UUMG_LoginBonusListLineItem_C_StumpAnimationEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LoginBonusListLineItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LoginBonusListLineItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C");
		return ptr;
	}

}


