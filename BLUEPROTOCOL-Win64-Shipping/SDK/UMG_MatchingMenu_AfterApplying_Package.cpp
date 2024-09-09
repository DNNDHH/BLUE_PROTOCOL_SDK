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
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetRewardSearchName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ModeId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SearchName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::GetRewardSearchName(int32_t ModeId, class FName* SearchName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetRewardSearchName");
		
		UUMG_MatchingMenu_AfterApplying_C_GetRewardSearchName_Params params {};
		params.ModeId = ModeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchName != nullptr)
			*SearchName = params.SearchName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetHelpMatchingRequiredInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ModeId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BattleScore                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClassLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::GetHelpMatchingRequiredInfo(int32_t ModeId, int32_t* BattleScore, int32_t* ClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetHelpMatchingRequiredInfo");
		
		UUMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo_Params params {};
		params.ModeId = ModeId;
		
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
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.MakeHelpModeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ModeId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::MakeHelpModeInfo(int32_t ModeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.MakeHelpModeInfo");
		
		UUMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo_Params params {};
		params.ModeId = ModeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetTerm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventTerm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::SetTerm(const class FName& EventTerm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetTerm");
		
		UUMG_MatchingMenu_AfterApplying_C_SetTerm_Params params {};
		params.EventTerm = EventTerm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetDungeonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        GameContentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HelpMatchingModeId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::SetDungeonInfo(const class FName& GameContentId, int32_t HelpMatchingModeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetDungeonInfo");
		
		UUMG_MatchingMenu_AfterApplying_C_SetDungeonInfo_Params params {};
		params.GameContentId = GameContentId;
		params.HelpMatchingModeId = HelpMatchingModeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetCommandMenuMode
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::SetCommandMenuMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetCommandMenuMode");
		
		UUMG_MatchingMenu_AfterApplying_C_SetCommandMenuMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetHUDMode
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::SetHUDMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetHUDMode");
		
		UUMG_MatchingMenu_AfterApplying_C_SetHUDMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmOut
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::ConfirmOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmOut");
		
		UUMG_MatchingMenu_AfterApplying_C_ConfirmOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitOut
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::WaitOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitOut");
		
		UUMG_MatchingMenu_AfterApplying_C_WaitOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OutCancel
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::OutCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OutCancel");
		
		UUMG_MatchingMenu_AfterApplying_C_OutCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OutClose
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::OutClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OutClose");
		
		UUMG_MatchingMenu_AfterApplying_C_OutClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Out
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::Out()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Out");
		
		UUMG_MatchingMenu_AfterApplying_C_Out_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmIn
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::ConfirmIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmIn");
		
		UUMG_MatchingMenu_AfterApplying_C_ConfirmIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitIn
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::WaitIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitIn");
		
		UUMG_MatchingMenu_AfterApplying_C_WaitIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Construct");
		
		UUMG_MatchingMenu_AfterApplying_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature");
		
		UUMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnAnimationFinished");
		
		UUMG_MatchingMenu_AfterApplying_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Destruct");
		
		UUMG_MatchingMenu_AfterApplying_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_1");
		
		UUMG_MatchingMenu_AfterApplying_C_WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_2");
		
		UUMG_MatchingMenu_AfterApplying_C_WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UUMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ExecuteUbergraph_UMG_MatchingMenu_AfterApplying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::ExecuteUbergraph_UMG_MatchingMenu_AfterApplying(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ExecuteUbergraph_UMG_MatchingMenu_AfterApplying");
		
		UUMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_AfterApplying_C::OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnCancel__DelegateSignature");
		
		UUMG_MatchingMenu_AfterApplying_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_AfterApplying_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClose__DelegateSignature");
		
		UUMG_MatchingMenu_AfterApplying_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_AfterApplying_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_AfterApplying_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C");
		return ptr;
	}

}


