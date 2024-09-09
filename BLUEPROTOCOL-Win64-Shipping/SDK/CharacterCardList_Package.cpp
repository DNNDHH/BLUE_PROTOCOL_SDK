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
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.UpdateCharacterCardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBPlayerCharacterCardData>          InListData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InNoNewMemberJoinInAnimation                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardList_C::UpdateCharacterCardList(TArray<struct FSBPlayerCharacterCardData>* InListData, bool InNoNewMemberJoinInAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.UpdateCharacterCardList");
		
		UCharacterCardList_C_UpdateCharacterCardList_Params params {};
		params.InNoNewMemberJoinInAnimation = InNoNewMemberJoinInAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InListData != nullptr)
			*InListData = params.InListData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.UnbindOnGetCharacterCardInfosDelegate
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::UnbindOnGetCharacterCardInfosDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.UnbindOnGetCharacterCardInfosDelegate");
		
		UCharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.InitForDebug
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::InitForDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.InitForDebug");
		
		UCharacterCardList_C_InitForDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.StartCharacterCardNewPartyMemberInAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterCardBase_C*                        InCharacterCard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterCardList_C::StartCharacterCardNewPartyMemberInAnimation(class UCharacterCardBase_C* InCharacterCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.StartCharacterCardNewPartyMemberInAnimation");
		
		UCharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation_Params params {};
		params.InCharacterCard = InCharacterCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.GetIsAdventurerCardOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutIsOpened                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardList_C::GetIsAdventurerCardOpened(bool* bOutIsOpened)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.GetIsAdventurerCardOpened");
		
		UCharacterCardList_C_GetIsAdventurerCardOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsOpened != nullptr)
			*bOutIsOpened = params.bOutIsOpened;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.FindPartyMemberStateByCharacterId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCharacterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class USBPartyMemberState*>                 InPartyMemberStateList                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class USBPartyMemberState*                         OutPartyMemberState                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterCardList_C::FindPartyMemberStateByCharacterId(const class FString& InCharacterId, TArray<class USBPartyMemberState*>* InPartyMemberStateList, class USBPartyMemberState** OutPartyMemberState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.FindPartyMemberStateByCharacterId");
		
		UCharacterCardList_C_FindPartyMemberStateByCharacterId_Params params {};
		params.InCharacterId = InCharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPartyMemberStateList != nullptr)
			*InPartyMemberStateList = params.InPartyMemberStateList;
		if (OutPartyMemberState != nullptr)
			*OutPartyMemberState = params.OutPartyMemberState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.RequestCharacterCardListUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InCharacterIds                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCharacterCardList_C::RequestCharacterCardListUpdate(TArray<class FString>* InCharacterIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.RequestCharacterCardListUpdate");
		
		UCharacterCardList_C_RequestCharacterCardListUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCharacterIds != nullptr)
			*InCharacterIds = params.InCharacterIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.SetupCharacterCardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBPlayerCharacterCardData                  InCharacterCardData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bInIsMe                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USBPartyMemberState*                         InPartyMemberState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInDoNewMemberJoinInAnimation                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardList_C::SetupCharacterCardData(int32_t InId, const struct FSBPlayerCharacterCardData& InCharacterCardData, bool bInIsMe, class USBPartyMemberState* InPartyMemberState, bool bInDoNewMemberJoinInAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.SetupCharacterCardData");
		
		UCharacterCardList_C_SetupCharacterCardData_Params params {};
		params.InId = InId;
		params.InCharacterCardData = InCharacterCardData;
		params.bInIsMe = bInIsMe;
		params.InPartyMemberState = InPartyMemberState;
		params.bInDoNewMemberJoinInAnimation = bInDoNewMemberJoinInAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InPartyMemberCharacterIds                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCharacterCardList_C::Init(TArray<class FString>* InPartyMemberCharacterIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.Init");
		
		UCharacterCardList_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPartyMemberCharacterIds != nullptr)
			*InPartyMemberCharacterIds = params.InPartyMemberCharacterIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.StartMissionIntroInAnimationEvent
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::StartMissionIntroInAnimationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.StartMissionIntroInAnimationEvent");
		
		UCharacterCardList_C_StartMissionIntroInAnimationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_1");
		
		UCharacterCardList_C_WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.PreConstruct");
		
		UCharacterCardList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.Construct
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.Construct");
		
		UCharacterCardList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.Destruct");
		
		UCharacterCardList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.OnCharacterCardClickedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCharacterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsMe                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterCardList_C::OnCharacterCardClickedEvent(const class FString& InCharacterId, bool bInIsMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.OnCharacterCardClickedEvent");
		
		UCharacterCardList_C_OnCharacterCardClickedEvent_Params params {};
		params.InCharacterId = InCharacterId;
		params.bInIsMe = bInIsMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.HandlePartyMemberUpdate
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::HandlePartyMemberUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.HandlePartyMemberUpdate");
		
		UCharacterCardList_C_HandlePartyMemberUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfoEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBPlayerCharacterCardData>          PlayerCharacterCardDatas                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCharacterCardList_C::OnGetCharacterCardInfoEvent(bool bWasSuccessful, int32_t RetCode, TArray<struct FSBPlayerCharacterCardData> PlayerCharacterCardDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfoEvent");
		
		UCharacterCardList_C_OnGetCharacterCardInfoEvent_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.RetCode = RetCode;
		params.PlayerCharacterCardDatas = PlayerCharacterCardDatas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.UnbindIsGetPlayerProfileDetailMenuDataEvent
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::UnbindIsGetPlayerProfileDetailMenuDataEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.UnbindIsGetPlayerProfileDetailMenuDataEvent");
		
		UCharacterCardList_C_UnbindIsGetPlayerProfileDetailMenuDataEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.OnIsGetPlayerProfileDetailMenuData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterCardList_C::OnIsGetPlayerProfileDetailMenuData(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.OnIsGetPlayerProfileDetailMenuData");
		
		UCharacterCardList_C_OnIsGetPlayerProfileDetailMenuData_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.PlayerProfileDetailMenuData = PlayerProfileDetailMenuData;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.DestPlayerProfile
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::DestPlayerProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.DestPlayerProfile");
		
		UCharacterCardList_C_DestPlayerProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.OnClosePlayerProfile
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::OnClosePlayerProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.OnClosePlayerProfile");
		
		UCharacterCardList_C_OnClosePlayerProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.ForceAdventurerCardClose
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::ForceAdventurerCardClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.ForceAdventurerCardClose");
		
		UCharacterCardList_C_ForceAdventurerCardClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::OnGameStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.OnGameStarted");
		
		UCharacterCardList_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.GoToCreateAdventurerCardSequence
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::GoToCreateAdventurerCardSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.GoToCreateAdventurerCardSequence");
		
		UCharacterCardList_C_GoToCreateAdventurerCardSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.ExecuteUbergraph_CharacterCardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterCardList_C::ExecuteUbergraph_CharacterCardList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.ExecuteUbergraph_CharacterCardList");
		
		UCharacterCardList_C_ExecuteUbergraph_CharacterCardList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfos__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCharacterCardList_C::OnGetCharacterCardInfos__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfos__DelegateSignature");
		
		UCharacterCardList_C_OnGetCharacterCardInfos__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterCardList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterCardList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterCardList.CharacterCardList_C");
		return ptr;
	}

}


