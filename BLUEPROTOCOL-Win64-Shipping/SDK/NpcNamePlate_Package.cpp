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
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.GetRouteGuideQuestId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::GetRouteGuideQuestId(int32_t* QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.GetRouteGuideQuestId");
		
		UNpcNamePlate_C_GetRouteGuideQuestId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestIndex != nullptr)
			*QuestIndex = params.QuestIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.SetQuestIconScaleByDistance
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::SetQuestIconScaleByDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.SetQuestIconScaleByDistance");
		
		UNpcNamePlate_C_SetQuestIconScaleByDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.GetPlayerDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::GetPlayerDistance(float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.GetPlayerDistance");
		
		UNpcNamePlate_C_GetPlayerDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.CursorInOutAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNpcNamePlate_C::CursorInOutAnim(bool bin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.CursorInOutAnim");
		
		UNpcNamePlate_C_CursorInOutAnim_Params params {};
		params.bin = bin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.CheckVisibility
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::CheckVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.CheckVisibility");
		
		UNpcNamePlate_C_CheckVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.UpdateQuest
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::UpdateQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.UpdateQuest");
		
		UNpcNamePlate_C_UpdateQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNpcNamePlate_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.SetText");
		
		UNpcNamePlate_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnQuestListDelegete_Reset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUnlockedQuestInfo>                  QuestList                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNpcNamePlate_C::OnQuestListDelegete_Reset(TArray<struct FUnlockedQuestInfo> QuestList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnQuestListDelegete_Reset");
		
		UNpcNamePlate_C_OnQuestListDelegete_Reset_Params params {};
		params.QuestList = QuestList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnAcceptQuestDelegate_Reset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EAcceptedQuestErrorCode                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          AcceptedQuestInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNpcNamePlate_C::OnAcceptQuestDelegate_Reset(bool Result, EAcceptedQuestErrorCode ErrorCode, int32_t RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnAcceptQuestDelegate_Reset");
		
		UNpcNamePlate_C_OnAcceptQuestDelegate_Reset_Params params {};
		params.Result = Result;
		params.ErrorCode = ErrorCode;
		params.RetCode = RetCode;
		params.AcceptedQuestInfo = AcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnCancelQuestDelegate_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::OnCancelQuestDelegate__1(bool Result, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnCancelQuestDelegate_イベント_1");
		
		UNpcNamePlate_C_OnCancelQuestDelegate__1_Params params {};
		params.Result = Result;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnUpdateQuestProgressDelegate_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          PrevAcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNpcNamePlate_C::OnUpdateQuestProgressDelegate__1(bool Result, int32_t RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnUpdateQuestProgressDelegate_イベント_1");
		
		UNpcNamePlate_C_OnUpdateQuestProgressDelegate__1_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.PrevAcceptedQuestInfo = PrevAcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnCompleteQuestDelegate_イベント_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestCompleteResult                               CompleteResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMailRewardData                           MailRewardData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNpcNamePlate_C::OnCompleteQuestDelegate__3(int32_t RetCode, int32_t QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnCompleteQuestDelegate_イベント_3");
		
		UNpcNamePlate_C_OnCompleteQuestDelegate__3_Params params {};
		params.RetCode = RetCode;
		params.QuestIndex = QuestIndex;
		params.CompleteResult = CompleteResult;
		params.MailRewardData = MailRewardData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnAcceptedQuestListDelegete_イベント_1
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::OnAcceptedQuestListDelegete__1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnAcceptedQuestListDelegete_イベント_1");
		
		UNpcNamePlate_C_OnAcceptedQuestListDelegete__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             NpcCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::OnBeginPlay(class ASBMobCharacter* NpcCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnBeginPlay");
		
		UNpcNamePlate_C_OnBeginPlay_Params params {};
		params.NpcCharacter = NpcCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnEndPlay
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::OnEndPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnEndPlay");
		
		UNpcNamePlate_C_OnEndPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnAdventurerRankDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::OnAdventurerRankDelegate_Event_1(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnAdventurerRankDelegate_Event_1");
		
		UNpcNamePlate_C_OnAdventurerRankDelegate_Event_1_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnSetKeyValue_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNpcNamePlate_C::OnSetKeyValue_Event(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnSetKeyValue_Event");
		
		UNpcNamePlate_C_OnSetKeyValue_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnLevelUp_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPrevLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCurLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBExtraExpParse                            InExtraExpParse                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UNpcNamePlate_C::OnLevelUp_Event(int32_t InPrevLevel, int32_t InCurLevel, const struct FSBExtraExpParse& InExtraExpParse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnLevelUp_Event");
		
		UNpcNamePlate_C_OnLevelUp_Event_Params params {};
		params.InPrevLevel = InPrevLevel;
		params.InCurLevel = InCurLevel;
		params.InExtraExpParse = InExtraExpParse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.ClassChangeNotify_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InDirtyExpiredEquipmentData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNpcNamePlate_C::ClassChangeNotify_Event(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.ClassChangeNotify_Event");
		
		UNpcNamePlate_C_ClassChangeNotify_Event_Params params {};
		params.InRetCode = InRetCode;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InDirtyExpiredEquipmentData = InDirtyExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnLoadRouteGuideInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::OnLoadRouteGuideInfo(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnLoadRouteGuideInfo");
		
		UNpcNamePlate_C_OnLoadRouteGuideInfo_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnChangeRouteGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::OnChangeRouteGuide(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnChangeRouteGuide");
		
		UNpcNamePlate_C_OnChangeRouteGuide_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.Construct
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.Construct");
		
		UNpcNamePlate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNpcNamePlate_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UNpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.SetNPCFacility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFacilityType                                    IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::SetNPCFacility(ESBFacilityType IconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.SetNPCFacility");
		
		UNpcNamePlate_C_SetNPCFacility_Params params {};
		params.IconType = IconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.SetNpcCharacter_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             InNpcCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::SetNpcCharacter_Internal(class ASBMobCharacter* InNpcCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.SetNpcCharacter_Internal");
		
		UNpcNamePlate_C_SetNpcCharacter_Internal_Params params {};
		params.InNpcCharacter = InNpcCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnChangeBalloonVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVsiible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNpcNamePlate_C::OnChangeBalloonVisible(bool bVsiible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnChangeBalloonVisible");
		
		UNpcNamePlate_C_OnChangeBalloonVisible_Params params {};
		params.bVsiible = bVsiible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.SetDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::SetDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.SetDepth");
		
		UNpcNamePlate_C_SetDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.SetChargeMax
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::SetChargeMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.SetChargeMax");
		
		UNpcNamePlate_C_SetChargeMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.AutoChangeInvisible
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::AutoChangeInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.AutoChangeInvisible");
		
		UNpcNamePlate_C_AutoChangeInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.AutoChangeVisible
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::AutoChangeVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.AutoChangeVisible");
		
		UNpcNamePlate_C_AutoChangeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.Destruct");
		
		UNpcNamePlate_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.UnbindChangeBalloonVisible
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::UnbindChangeBalloonVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.UnbindChangeBalloonVisible");
		
		UNpcNamePlate_C_UnbindChangeBalloonVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.SetInteractionTargetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInVisibility                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNpcNamePlate_C::SetInteractionTargetVisibility(bool bInVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.SetInteractionTargetVisibility");
		
		UNpcNamePlate_C_SetInteractionTargetVisibility_Params params {};
		params.bInVisibility = bInVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.SetScreenPositionOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InScreenPositionOffset                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.SetScreenPositionOffset");
		
		UNpcNamePlate_C_SetScreenPositionOffset_Params params {};
		params.InScreenPositionOffset = InScreenPositionOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.FadeOutFinishSelectCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFadeIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNpcNamePlate_C::FadeOutFinishSelectCursor(bool IsFadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.FadeOutFinishSelectCursor");
		
		UNpcNamePlate_C_FadeOutFinishSelectCursor_Params params {};
		params.IsFadeIn = IsFadeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.OnDisplayStart
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::OnDisplayStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.OnDisplayStart");
		
		UNpcNamePlate_C_OnDisplayStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.QuestIconUpdateTimerEvent
	 * 		Flags  -> ()
	 */
	void UNpcNamePlate_C::QuestIconUpdateTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.QuestIconUpdateTimerEvent");
		
		UNpcNamePlate_C_QuestIconUpdateTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NpcNamePlate.NpcNamePlate_C.ExecuteUbergraph_NpcNamePlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNpcNamePlate_C::ExecuteUbergraph_NpcNamePlate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NpcNamePlate.NpcNamePlate_C.ExecuteUbergraph_NpcNamePlate");
		
		UNpcNamePlate_C_ExecuteUbergraph_NpcNamePlate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNpcNamePlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNpcNamePlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NpcNamePlate.NpcNamePlate_C");
		return ptr;
	}

}


