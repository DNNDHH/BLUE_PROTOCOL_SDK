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
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.Set Sync Ribbon Pos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSingleBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UApplyButtonList_C::SetSyncRibbonPos(bool IsSingleBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.Set Sync Ribbon Pos");
		
		UApplyButtonList_C_SetSyncRibbonPos_Params params {};
		params.IsSingleBtn = IsSingleBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.CheckPartyState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBEntryConditionPartyState                        State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Need                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UApplyButtonList_C::CheckPartyState(ESBEntryConditionPartyState State, int32_t Need, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.CheckPartyState");
		
		UApplyButtonList_C_CheckPartyState_Params params {};
		params.State = State;
		params.Need = Need;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.CheckClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESBClassType>                               InClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UApplyButtonList_C::CheckClassType(TArray<ESBClassType>* InClass, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.CheckClassType");
		
		UApplyButtonList_C_CheckClassType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InClass != nullptr)
			*InClass = params.InClass;
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.CheckClearQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InQuest                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UApplyButtonList_C::CheckClearQuest(TArray<class FName>* InQuest, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.CheckClearQuest");
		
		UApplyButtonList_C_CheckClearQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InQuest != nullptr)
			*InQuest = params.InQuest;
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.SetClickInputAction
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::SetClickInputAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.SetClickInputAction");
		
		UApplyButtonList_C_SetClickInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.UISupportKeyReset
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::UISupportKeyReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.UISupportKeyReset");
		
		UApplyButtonList_C_UISupportKeyReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.SetErrorText2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  SelectedMapInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               isParty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanApply                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UApplyButtonList_C::SetErrorText2(const struct FSBMapInfo& SelectedMapInfo, bool isParty, bool* CanApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.SetErrorText2");
		
		UApplyButtonList_C_SetErrorText2_Params params {};
		params.SelectedMapInfo = SelectedMapInfo;
		params.isParty = isParty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanApply != nullptr)
			*CanApply = params.CanApply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.SetErrorText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  SelectedMapInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               CanApply                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UApplyButtonList_C::SetErrorText(const struct FSBMapInfo& SelectedMapInfo, bool* CanApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.SetErrorText");
		
		UApplyButtonList_C_SetErrorText_Params params {};
		params.SelectedMapInfo = SelectedMapInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanApply != nullptr)
			*CanApply = params.CanApply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.SetupIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UApplyButtonList_C::SetupIsEnabled(struct FSBMapInfo* MapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.SetupIsEnabled");
		
		UApplyButtonList_C_SetupIsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapInfo != nullptr)
			*MapInfo = params.MapInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.SetupVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCommandMenu                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMapInfo                                  MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UApplyButtonList_C::SetupVisibility(bool IsCommandMenu, struct FSBMapInfo* MapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.SetupVisibility");
		
		UApplyButtonList_C_SetupVisibility_Params params {};
		params.IsCommandMenu = IsCommandMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapInfo != nullptr)
			*MapInfo = params.MapInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.SetupText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UApplyButtonList_C::SetupText(struct FSBMapInfo* MapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.SetupText");
		
		UApplyButtonList_C_SetupText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapInfo != nullptr)
			*MapInfo = params.MapInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCommandMenu                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMapInfo                                  MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UApplyButtonList_C::Setup(bool IsCommandMenu, struct FSBMapInfo* MapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.Setup");
		
		UApplyButtonList_C_Setup_Params params {};
		params.IsCommandMenu = IsCommandMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapInfo != nullptr)
			*MapInfo = params.MapInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UApplyButtonList_C_BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UApplyButtonList_C_BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UApplyButtonList_C_BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.Construct
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.Construct");
		
		UApplyButtonList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.Destruct");
		
		UApplyButtonList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.Event_ReSetups
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::Event_ReSetups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.Event_ReSetups");
		
		UApplyButtonList_C_Event_ReSetups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.GetHelpMIssionId
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::GetHelpMIssionId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.GetHelpMIssionId");
		
		UApplyButtonList_C_GetHelpMIssionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.OnIsHelpMatchingMode_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      GameContentId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UApplyButtonList_C::OnIsHelpMatchingMode_Event(bool bWasSuccessful, int32_t RetCode, const class FString& GameContentId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.OnIsHelpMatchingMode_Event");
		
		UApplyButtonList_C_OnIsHelpMatchingMode_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.RetCode = RetCode;
		params.GameContentId = GameContentId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.ExecuteUbergraph_ApplyButtonList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UApplyButtonList_C::ExecuteUbergraph_ApplyButtonList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.ExecuteUbergraph_ApplyButtonList");
		
		UApplyButtonList_C_ExecuteUbergraph_ApplyButtonList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.OnClickedHelpMatching__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModeId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UApplyButtonList_C::OnClickedHelpMatching__DelegateSignature(const class FString& MapId, int32_t ModeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.OnClickedHelpMatching__DelegateSignature");
		
		UApplyButtonList_C_OnClickedHelpMatching__DelegateSignature_Params params {};
		params.MapId = MapId;
		params.ModeId = ModeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.OnClickedPartyList__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::OnClickedPartyList__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.OnClickedPartyList__DelegateSignature");
		
		UApplyButtonList_C_OnClickedPartyList__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.OnClickedMatching__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::OnClickedMatching__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.OnClickedMatching__DelegateSignature");
		
		UApplyButtonList_C_OnClickedMatching__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ApplyButtonList.ApplyButtonList_C.OnClickedSoloOrParty__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UApplyButtonList_C::OnClickedSoloOrParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ApplyButtonList.ApplyButtonList_C.OnClickedSoloOrParty__DelegateSignature");
		
		UApplyButtonList_C_OnClickedSoloOrParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UApplyButtonList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UApplyButtonList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ApplyButtonList.ApplyButtonList_C");
		return ptr;
	}

}


