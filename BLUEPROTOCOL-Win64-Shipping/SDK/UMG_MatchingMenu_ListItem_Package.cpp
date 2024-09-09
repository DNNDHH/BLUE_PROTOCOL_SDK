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
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetRewardSearchName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SearchName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ListItem_C::GetRewardSearchName(class FName* SearchName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetRewardSearchName");
		
		UUMG_MatchingMenu_ListItem_C_GetRewardSearchName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchName != nullptr)
			*SearchName = params.SearchName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.MakeMapInfo
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_ListItem_C::MakeMapInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.MakeMapInfo");
		
		UUMG_MatchingMenu_ListItem_C_MakeMapInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetHelpMatchingRequiredInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BattleScore                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClassLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ListItem_C::GetHelpMatchingRequiredInfo(int32_t* BattleScore, int32_t* ClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetHelpMatchingRequiredInfo");
		
		UUMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BattleScore != nullptr)
			*BattleScore = params.BattleScore;
		if (ClassLevel != nullptr)
			*ClassLevel = params.ClassLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetVisibilityNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_ListItem_C::SetVisibilityNew(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetVisibilityNew");
		
		UUMG_MatchingMenu_ListItem_C_SetVisibilityNew_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Get_ItemButton_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUMG_MatchingMenu_ListItem_C::Get_ItemButton_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Get_ItemButton_ToolTipWidget_1");
		
		UUMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Select                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_ListItem_C::SetSelect(bool Select)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetSelect");
		
		UUMG_MatchingMenu_ListItem_C_SetSelect_Params params {};
		params.Select = Select;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Update Style
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFocus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_ListItem_C::UpdateStyle(bool IsFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Update Style");
		
		UUMG_MatchingMenu_ListItem_C_UpdateStyle_Params params {};
		params.IsFocus = IsFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_ListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Construct");
		
		UUMG_MatchingMenu_ListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_ListItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_MatchingMenu_ListItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_ListItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Destruct");
		
		UUMG_MatchingMenu_ListItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnUpdateRewardBoostInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ListItem_C::OnUpdateRewardBoostInfo(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnUpdateRewardBoostInfo");
		
		UUMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.UpdateBonusIcon
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_ListItem_C::UpdateBonusIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.UpdateBonusIcon");
		
		UUMG_MatchingMenu_ListItem_C_UpdateBonusIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.ExecuteUbergraph_UMG_MatchingMenu_ListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ListItem_C::ExecuteUbergraph_UMG_MatchingMenu_ListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.ExecuteUbergraph_UMG_MatchingMenu_ListItem");
		
		UUMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  DungeonMapInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UUMG_MatchingMenu_ListItem_C*                ListItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_ListItem_C::OnSelected__DelegateSignature(const struct FSBMapInfo& DungeonMapInfo, class UUMG_MatchingMenu_ListItem_C* ListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnSelected__DelegateSignature");
		
		UUMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature_Params params {};
		params.DungeonMapInfo = DungeonMapInfo;
		params.ListItem = ListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_ListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_ListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C");
		return ptr;
	}

}


