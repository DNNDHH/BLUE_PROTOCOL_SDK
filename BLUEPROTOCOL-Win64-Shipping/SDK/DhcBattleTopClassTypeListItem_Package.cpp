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
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       OutClassType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeListItem_C::GetClassType(ESBClassType* OutClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetClassType");
		
		UDhcBattleTopClassTypeListItem_C_GetClassType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClassType != nullptr)
			*OutClassType = params.OutClassType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.IsScoreInfoEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsScoreInfoEmpty                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopClassTypeListItem_C::IsScoreInfoEmpty(bool* OutIsScoreInfoEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.IsScoreInfoEmpty");
		
		UDhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsScoreInfoEmpty != nullptr)
			*OutIsScoreInfoEmpty = params.OutIsScoreInfoEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetScoreInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattleHighScoreInfo                   OutScoreInfo                                               (Parm, OutParm)
	 */
	void UDhcBattleTopClassTypeListItem_C::GetScoreInfo(struct FSBDhcBattleHighScoreInfo* OutScoreInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetScoreInfo");
		
		UDhcBattleTopClassTypeListItem_C_GetScoreInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutScoreInfo != nullptr)
			*OutScoreInfo = params.OutScoreInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetTextAndClassTypeIconColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHovered                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopClassTypeListItem_C::SetTextAndClassTypeIconColor(bool InIsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetTextAndClassTypeIconColor");
		
		UDhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor_Params params {};
		params.InIsHovered = InIsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopClassTypeListItem_C::SetSelected(bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetSelected");
		
		UDhcBattleTopClassTypeListItem_C_SetSelected_Params params {};
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetIsCurrPlayerClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCurrPlayerClassType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopClassTypeListItem_C::SetIsCurrPlayerClassType(bool InIsCurrPlayerClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetIsCurrPlayerClassType");
		
		UDhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType_Params params {};
		params.InIsCurrPlayerClassType = InIsCurrPlayerClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetupAsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeListItem_C::SetupAsEmpty(ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetupAsEmpty");
		
		UDhcBattleTopClassTypeListItem_C_SetupAsEmpty_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattleHighScoreInfo                   InScoreInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDhcBattleTopClassTypeListItem_C::Setup(const struct FSBDhcBattleHighScoreInfo& InScoreInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.Setup");
		
		UDhcBattleTopClassTypeListItem_C_Setup_Params params {};
		params.InScoreInfo = InScoreInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDhcBattleTopClassTypeListItem_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UDhcBattleTopClassTypeListItem_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDhcBattleTopClassTypeListItem_C::BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UDhcBattleTopClassTypeListItem_C_BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDhcBattleTopClassTypeListItem_C::BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UDhcBattleTopClassTypeListItem_C_BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.ExecuteUbergraph_DhcBattleTopClassTypeListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeListItem_C::ExecuteUbergraph_DhcBattleTopClassTypeListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.ExecuteUbergraph_DhcBattleTopClassTypeListItem");
		
		UDhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDhcBattleTopClassTypeListItem_C*            InSelf                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeListItem_C::OnClicked__DelegateSignature(class UDhcBattleTopClassTypeListItem_C* InSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.OnClicked__DelegateSignature");
		
		UDhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature_Params params {};
		params.InSelf = InSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDhcBattleTopClassTypeListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDhcBattleTopClassTypeListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C");
		return ptr;
	}

}


