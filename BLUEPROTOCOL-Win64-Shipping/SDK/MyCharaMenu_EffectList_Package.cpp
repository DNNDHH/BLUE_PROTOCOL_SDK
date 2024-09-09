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
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Correct EquipedUIDs
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::CorrectEquipedUIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Correct EquipedUIDs");
		
		UMyCharaMenu_EffectList_C_CorrectEquipedUIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.AnimMyCharaOut
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::AnimMyCharaOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.AnimMyCharaOut");
		
		UMyCharaMenu_EffectList_C_AnimMyCharaOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.AddEffectItemToList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InEffectNameText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_EffectList_C::AddEffectItemToList(const class FText& InEffectNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.AddEffectItemToList");
		
		UMyCharaMenu_EffectList_C_AddEffectItemToList_Params params {};
		params.InEffectNameText = InEffectNameText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.SetupEffectParameters
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::SetupEffectParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.SetupEffectParameters");
		
		UMyCharaMenu_EffectList_C_SetupEffectParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Close
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Close");
		
		UMyCharaMenu_EffectList_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.EscDetailedStatus
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::EscDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.EscDetailedStatus");
		
		UMyCharaMenu_EffectList_C_EscDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.ClsoeDetailedStatus
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::ClsoeDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.ClsoeDetailedStatus");
		
		UMyCharaMenu_EffectList_C_ClsoeDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Construct");
		
		UMyCharaMenu_EffectList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Init
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Init");
		
		UMyCharaMenu_EffectList_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Destruct");
		
		UMyCharaMenu_EffectList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UMyCharaMenu_EffectList_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2");
		
		UMyCharaMenu_EffectList_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_C*              InAchievementListRef                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementListRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature_Params params {};
		params.InAchievementListRef = InAchievementListRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.ExecuteUbergraph_MyCharaMenu_EffectList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EffectList_C::ExecuteUbergraph_MyCharaMenu_EffectList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.ExecuteUbergraph_MyCharaMenu_EffectList");
		
		UMyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnSelectAchievementSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EffectList_C::OnSelectAchievementSaved__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnSelectAchievementSaved__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAcquiredAchievementLoaded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EffectList_C::OnAcquiredAchievementLoaded__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAcquiredAchievementLoaded__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAchievementChangeButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_C*              InAchievementList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EffectList_C::OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAchievementChangeButtonClicked__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature_Params params {};
		params.InAchievementList = InAchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnSubMenuChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EffectList_C::OnSubMenuChanged__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnSubMenuChanged__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAnimFinishedMyCharaOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectList_C::OnAnimFinishedMyCharaOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAnimFinishedMyCharaOut__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_OnAnimFinishedMyCharaOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnChangeEquipWeaponProc__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ProcStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EffectList_C::OnChangeEquipWeaponProc__DelegateSignature(bool ProcStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnChangeEquipWeaponProc__DelegateSignature");
		
		UMyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature_Params params {};
		params.ProcStart = ProcStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_EffectList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_EffectList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_EffectList.MyCharaMenu_EffectList_C");
		return ptr;
	}

}


