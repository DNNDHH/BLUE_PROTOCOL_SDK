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
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.ResetSyncParam
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::ResetSyncParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.ResetSyncParam");
		
		UPlayerPartyLevelInfo_C_ResetSyncParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.RequestGetEquipItemsForCharacters
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::RequestGetEquipItemsForCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.RequestGetEquipItemsForCharacters");
		
		UPlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateEquipItemsForCharacters
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::UpdateEquipItemsForCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateEquipItemsForCharacters");
		
		UPlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Set Battle Score Core
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStackBEnableType                                StackBEnableType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPlayerMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerPartyLevelInfo_C::SetBattleScoreCore(int32_t LevelSyncTarget, ESBStackBEnableType StackBEnableType, bool IsPlayerMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Set Battle Score Core");
		
		UPlayerPartyLevelInfo_C_SetBattleScoreCore_Params params {};
		params.LevelSyncTarget = LevelSyncTarget;
		params.StackBEnableType = StackBEnableType;
		params.IsPlayerMode = IsPlayerMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStackBEnableType                                StackBEnableType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPlayerMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerPartyLevelInfo_C::SetBattleScore(int32_t LevelSyncTarget, ESBStackBEnableType StackBEnableType, bool IsPlayerMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetBattleScore");
		
		UPlayerPartyLevelInfo_C_SetBattleScore_Params params {};
		params.LevelSyncTarget = LevelSyncTarget;
		params.StackBEnableType = StackBEnableType;
		params.IsPlayerMode = IsPlayerMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetTextColorBySync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SyncIsValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::SetTextColorBySync(bool SyncIsValid, class UTextBlock* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetTextColorBySync");
		
		UPlayerPartyLevelInfo_C_SetTextColorBySync_Params params {};
		params.SyncIsValid = SyncIsValid;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.GetLevelSyncInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MemberIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutLevelSyncIsValid                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutClassLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::GetLevelSyncInfo(int32_t LevelSyncValue, int32_t MemberIndex, bool* OutLevelSyncIsValid, int32_t* OutClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.GetLevelSyncInfo");
		
		UPlayerPartyLevelInfo_C_GetLevelSyncInfo_Params params {};
		params.LevelSyncValue = LevelSyncValue;
		params.MemberIndex = MemberIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLevelSyncIsValid != nullptr)
			*OutLevelSyncIsValid = params.OutLevelSyncIsValid;
		if (OutClassLevel != nullptr)
			*OutClassLevel = params.OutClassLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateLevelBySync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MemberIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutLevelSyncIsValid                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerPartyLevelInfo_C::UpdateLevelBySync(int32_t LevelSyncValue, int32_t MemberIndex, class UTextBlock* Text, bool* OutLevelSyncIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateLevelBySync");
		
		UPlayerPartyLevelInfo_C_UpdateLevelBySync_Params params {};
		params.LevelSyncValue = LevelSyncValue;
		params.MemberIndex = MemberIndex;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLevelSyncIsValid != nullptr)
			*OutLevelSyncIsValid = params.OutLevelSyncIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::SetLevelText(class UTextBlock* Text, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelText");
		
		UPlayerPartyLevelInfo_C_SetLevelText_Params params {};
		params.Text = Text;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MemberIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::SetLevelSyncValueMember(int32_t LevelSyncValue, int32_t MemberIndex, class UTextBlock* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMember");
		
		UPlayerPartyLevelInfo_C_SetLevelSyncValueMember_Params params {};
		params.LevelSyncValue = LevelSyncValue;
		params.MemberIndex = MemberIndex;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::SetLevelSyncValueMe(int32_t LevelSyncValue, class UTextBlock* Text, class UImage* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMe");
		
		UPlayerPartyLevelInfo_C_SetLevelSyncValueMe_Params params {};
		params.LevelSyncValue = LevelSyncValue;
		params.Text = Text;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::SetLevelSyncValueParty(int32_t LevelSyncValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueParty");
		
		UPlayerPartyLevelInfo_C_SetLevelSyncValueParty_Params params {};
		params.LevelSyncValue = LevelSyncValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValuePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::SetLevelSyncValuePlayer(int32_t LevelSyncValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValuePlayer");
		
		UPlayerPartyLevelInfo_C_SetLevelSyncValuePlayer_Params params {};
		params.LevelSyncValue = LevelSyncValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelSyncValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBStackBEnableType                                StackBEnableType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMapInfo                                  MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bNeedCorrection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerPartyLevelInfo_C::SetLevelSyncValue(int32_t LevelSyncValue, ESBStackBEnableType StackBEnableType, const struct FSBMapInfo& MapInfo, bool bNeedCorrection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValue");
		
		UPlayerPartyLevelInfo_C_SetLevelSyncValue_Params params {};
		params.LevelSyncValue = LevelSyncValue;
		params.StackBEnableType = StackBEnableType;
		params.MapInfo = MapInfo;
		params.bNeedCorrection = bNeedCorrection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.HideAdventurerRank
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::HideAdventurerRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.HideAdventurerRank");
		
		UPlayerPartyLevelInfo_C_HideAdventurerRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeClassInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MemberIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBRuntimeTextBlock*                         RuntimeText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClassIconL_C*                               ClassIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCaptureImageMatching_C*                     CaptureImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::InitializeClassInfo(int32_t MemberIndex, class USBRuntimeTextBlock* RuntimeText, class UClassIconL_C* ClassIcon, class UCaptureImageMatching_C* CaptureImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeClassInfo");
		
		UPlayerPartyLevelInfo_C_InitializeClassInfo_Params params {};
		params.MemberIndex = MemberIndex;
		params.RuntimeText = RuntimeText;
		params.ClassIcon = ClassIcon;
		params.CaptureImage = CaptureImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeCommon
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::InitializeCommon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeCommon");
		
		UPlayerPartyLevelInfo_C_InitializeCommon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeParty
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::InitializeParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeParty");
		
		UPlayerPartyLevelInfo_C_InitializeParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializePlayer
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::InitializePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializePlayer");
		
		UPlayerPartyLevelInfo_C_InitializePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Initialize
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Initialize");
		
		UPlayerPartyLevelInfo_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.DownloadAndSetFaceImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCaptureImageMatching_C*                     CaptureImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::DownloadAndSetFaceImage(class UCaptureImageMatching_C* CaptureImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.DownloadAndSetFaceImage");
		
		UPlayerPartyLevelInfo_C_DownloadAndSetFaceImage_Params params {};
		params.CaptureImage = CaptureImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Construct");
		
		UPlayerPartyLevelInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Event_OnChangedPartyMemberCount
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::Event_OnChangedPartyMemberCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Event_OnChangedPartyMemberCount");
		
		UPlayerPartyLevelInfo_C_Event_OnChangedPartyMemberCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlayerPartyLevelInfo_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Destruct");
		
		UPlayerPartyLevelInfo_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.CompleteEvent_OnGetEquipItemsForCharactersDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FBattleMemberLevelSyncInfo>          BattleMemberLevelSyncInfos                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerPartyLevelInfo_C::CompleteEvent_OnGetEquipItemsForCharactersDelegate(bool bWasSuccessful, int32_t RetCode, TArray<struct FBattleMemberLevelSyncInfo> BattleMemberLevelSyncInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.CompleteEvent_OnGetEquipItemsForCharactersDelegate");
		
		UPlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.RetCode = RetCode;
		params.BattleMemberLevelSyncInfos = BattleMemberLevelSyncInfos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.ExecuteUbergraph_PlayerPartyLevelInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerPartyLevelInfo_C::ExecuteUbergraph_PlayerPartyLevelInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.ExecuteUbergraph_PlayerPartyLevelInfo");
		
		UPlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerPartyLevelInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerPartyLevelInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerPartyLevelInfo.PlayerPartyLevelInfo_C");
		return ptr;
	}

}


