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
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.SetBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBattleScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeListItem_C::SetBattleScore(int32_t InBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.SetBattleScore");
		
		UBattleCordeListItem_C_SetBattleScore_Params params {};
		params.InBattleScore = InBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.SetColorAndOpacityOfBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeListItem_C::SetColorAndOpacityOfBattleScore(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.SetColorAndOpacityOfBattleScore");
		
		UBattleCordeListItem_C_SetColorAndOpacityOfBattleScore_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.GetBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBButton_C*                                 Btn01                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeListItem_C::GetBtn(class USBButton_C** Btn01)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.GetBtn");
		
		UBattleCordeListItem_C_GetBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Btn01 != nullptr)
			*Btn01 = params.Btn01;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.GetClassIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClassIcon_C*                                ClassIcon                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeListItem_C::GetClassIcon(class UClassIcon_C** ClassIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.GetClassIcon");
		
		UBattleCordeListItem_C_GetClassIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassIcon != nullptr)
			*ClassIcon = params.ClassIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.GetNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  CordeNameTxt                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeListItem_C::GetNameText(class UTextBlock** CordeNameTxt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.GetNameText");
		
		UBattleCordeListItem_C_GetNameText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CordeNameTxt != nullptr)
			*CordeNameTxt = params.CordeNameTxt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.SetWide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToWide                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeListItem_C::SetWide(bool ToWide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.SetWide");
		
		UBattleCordeListItem_C_SetWide_Params params {};
		params.ToWide = ToWide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.GetCordeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerPresetEquipList                    OutCordeData                                               (Parm, OutParm)
	 */
	void UBattleCordeListItem_C::GetCordeData(struct FSBPlayerPresetEquipList* OutCordeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.GetCordeData");
		
		UBattleCordeListItem_C_GetCordeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCordeData != nullptr)
			*OutCordeData = params.OutCordeData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeListItem_C::SetSelected(bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.SetSelected");
		
		UBattleCordeListItem_C_SetSelected_Params params {};
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.SetIsEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelectable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeListItem_C::SetIsEnable(bool InIsSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.SetIsEnable");
		
		UBattleCordeListItem_C_SetIsEnable_Params params {};
		params.InIsSelectable = InIsSelectable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerPresetEquipList                    InCordeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBattleCordeListItem_C::Setup(const struct FSBPlayerPresetEquipList& InCordeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.Setup");
		
		UBattleCordeListItem_C_Setup_Params params {};
		params.InCordeData = InCordeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeListItem_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBattleCordeListItem_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeListItem_C::BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBattleCordeListItem_C_BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeListItem_C::BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBattleCordeListItem_C_BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeListItem_C::BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBattleCordeListItem_C_BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeListItem_C::BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UBattleCordeListItem_C_BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeListItem_C::BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UBattleCordeListItem_C_BndEvt__BattleCordeListItem_BtnWide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.ExecuteUbergraph_BattleCordeListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeListItem_C::ExecuteUbergraph_BattleCordeListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.ExecuteUbergraph_BattleCordeListItem");
		
		UBattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeListItem.BattleCordeListItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSelf                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeListItem_C::OnClicked__DelegateSignature(class UBattleCordeListItem_C* InSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeListItem.BattleCordeListItem_C.OnClicked__DelegateSignature");
		
		UBattleCordeListItem_C_OnClicked__DelegateSignature_Params params {};
		params.InSelf = InSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleCordeListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleCordeListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleCordeListItem.BattleCordeListItem_C");
		return ptr;
	}

}


