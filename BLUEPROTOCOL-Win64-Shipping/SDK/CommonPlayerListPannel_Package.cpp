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
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.CanOpenPlayerDetailByTargetCharacterId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bCanOpen                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::CanOpenPlayerDetailByTargetCharacterId(const class FString& CharacterId, bool* bCanOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.CanOpenPlayerDetailByTargetCharacterId");
		
		UCommonPlayerListPannel_C_CanOpenPlayerDetailByTargetCharacterId_Params params {};
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanOpen != nullptr)
			*bCanOpen = params.bCanOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateCommandBtnStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::UpdateCommandBtnStatus(bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateCommandBtnStatus");
		
		UCommonPlayerListPannel_C_UpdateCommandBtnStatus_Params params {};
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendProgressText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   inProgressDate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InExtraVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::SetFriendProgressText(const struct FDateTime& inProgressDate, bool InExtraVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendProgressText");
		
		UCommonPlayerListPannel_C_SetFriendProgressText_Params params {};
		params.inProgressDate = inProgressDate;
		params.InExtraVisible = InExtraVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Is PSOnly Diff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlatformInfo                             PlatformInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPlayerListPannel_C::SetIsPSOnlyDiff(const struct FSBPlatformInfo& PlatformInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Is PSOnly Diff");
		
		UCommonPlayerListPannel_C_SetIsPSOnlyDiff_Params params {};
		params.PlatformInfo = PlatformInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Download                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::UpdatePlayerIcon(bool* Download)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerIcon");
		
		UCommonPlayerListPannel_C_UpdatePlayerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Download != nullptr)
			*Download = params.Download;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerCommet
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::UpdatePlayerCommet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerCommet");
		
		UCommonPlayerListPannel_C_UpdatePlayerCommet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerName
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::UpdatePlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerName");
		
		UCommonPlayerListPannel_C_UpdatePlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckOpenAdventureCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWarning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::CheckOpenAdventureCard(int32_t InWarning, bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckOpenAdventureCard");
		
		UCommonPlayerListPannel_C_CheckOpenAdventureCard_Params params {};
		params.InWarning = InWarning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetErrorType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWarning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::SetErrorType(int32_t InWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetErrorType");
		
		UCommonPlayerListPannel_C_SetErrorType_Params params {};
		params.InWarning = InWarning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UnbindPlayerProfile
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::UnbindPlayerProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UnbindPlayerProfile");
		
		UCommonPlayerListPannel_C_UnbindPlayerProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.BindPlayerProfile
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::BindPlayerProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.BindPlayerProfile");
		
		UCommonPlayerListPannel_C_BindPlayerProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.ShowSendAdventureCardError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InWasSuccessful                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendAdventureCardResult                    InSendAdventureResult                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool UCommonPlayerListPannel_C::ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.ShowSendAdventureCardError");
		
		UCommonPlayerListPannel_C_ShowSendAdventureCardError_Params params {};
		params.InWasSuccessful = InWasSuccessful;
		params.InSendAdventureResult = InSendAdventureResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.Show Player Profile Error Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTextNameId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::ShowPlayerProfileErrorMessage(const class FName& InTextNameId, int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.Show Player Profile Error Message");
		
		UCommonPlayerListPannel_C_ShowPlayerProfileErrorMessage_Params params {};
		params.InTextNameId = InTextNameId;
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetConsent
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetConsent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetConsent");
		
		UCommonPlayerListPannel_C_PreSetConsent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetContact
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetContact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetContact");
		
		UCommonPlayerListPannel_C_PreSetContact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyIcon
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetPartyIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyIcon");
		
		UCommonPlayerListPannel_C_SetPartyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeBtn
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitLikeBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeBtn");
		
		UCommonPlayerListPannel_C_InitLikeBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetLikeSend
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetLikeSend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetLikeSend");
		
		UCommonPlayerListPannel_C_PreSetLikeSend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPannelVersion
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetPannelVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPannelVersion");
		
		UCommonPlayerListPannel_C_SetPannelVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildRoleIcon
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetGuildRoleIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildRoleIcon");
		
		UCommonPlayerListPannel_C_SetGuildRoleIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetGuild
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetGuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetGuild");
		
		UCommonPlayerListPannel_C_PreSetGuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetMailInBox
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetMailInBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetMailInBox");
		
		UCommonPlayerListPannel_C_PreSetMailInBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.DeleteResponseWaitUIblocker
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::DeleteResponseWaitUIblocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.DeleteResponseWaitUIblocker");
		
		UCommonPlayerListPannel_C_DeleteResponseWaitUIblocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.CreateResponseWaitUIblocker
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::CreateResponseWaitUIblocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.CreateResponseWaitUIblocker");
		
		UCommonPlayerListPannel_C_CreateResponseWaitUIblocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Like Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSendLIke                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OnlineStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPSOnlyDiff                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::SetLikeBtn(bool IsSendLIke, int32_t OnlineStatus, bool IsPSOnlyDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Like Btn");
		
		UCommonPlayerListPannel_C_SetLikeBtn_Params params {};
		params.IsSendLIke = IsSendLIke;
		params.OnlineStatus = OnlineStatus;
		params.IsPSOnlyDiff = IsPSOnlyDiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckProfileEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBProfilePublicSettingType                        PublicSetting                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isFriend                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsOk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::CheckProfileEnable(ESBProfilePublicSettingType PublicSetting, bool isFriend, bool* IsOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckProfileEnable");
		
		UCommonPlayerListPannel_C_CheckProfileEnable_Params params {};
		params.PublicSetting = PublicSetting;
		params.isFriend = isFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOk != nullptr)
			*IsOk = params.IsOk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.RefreshPannel
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::RefreshPannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.RefreshPannel");
		
		UCommonPlayerListPannel_C_RefreshPannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.TurnOnCommonUI
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::TurnOnCommonUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.TurnOnCommonUI");
		
		UCommonPlayerListPannel_C_TurnOnCommonUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetBlock
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetBlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetBlock");
		
		UCommonPlayerListPannel_C_PreSetBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Profile Variables
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetProfileVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Profile Variables");
		
		UCommonPlayerListPannel_C_SetProfileVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetSearch
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetSearch");
		
		UCommonPlayerListPannel_C_PreSetSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::IsSelected(bool* bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsSelected");
		
		UCommonPlayerListPannel_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelected != nullptr)
			*bSelected = params.bSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetFriend
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetFriend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetFriend");
		
		UCommonPlayerListPannel_C_PreSetFriend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetParty
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PreSetParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetParty");
		
		UCommonPlayerListPannel_C_PreSetParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetOnlineStateTagInfo
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetOnlineStateTagInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetOnlineStateTagInfo");
		
		UCommonPlayerListPannel_C_SetOnlineStateTagInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetTensionTagIcon
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetTensionTagIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetTensionTagIcon");
		
		UCommonPlayerListPannel_C_SetTensionTagIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetComment
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetComment");
		
		UCommonPlayerListPannel_C_SetComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassLevel
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetClassLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassLevel");
		
		UCommonPlayerListPannel_C_SetClassLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassIcon
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetClassIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassIcon");
		
		UCommonPlayerListPannel_C_SetClassIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFaceImage
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetFaceImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFaceImage");
		
		UCommonPlayerListPannel_C_SetFaceImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendIcon
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetFriendIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendIcon");
		
		UCommonPlayerListPannel_C_SetFriendIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPlayerName
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPlayerName");
		
		UCommonPlayerListPannel_C_SetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsCommandMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMyCharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsPromoteMember                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::IsCommandMode(const class FString& InMyCharacterId, bool IsPromoteMember, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsCommandMode");
		
		UCommonPlayerListPannel_C_IsCommandMode_Params params {};
		params.InMyCharacterId = InMyCharacterId;
		params.IsPromoteMember = IsPromoteMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEnableCommandModeButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::SetEnableCommandModeButton(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEnableCommandModeButton");
		
		UCommonPlayerListPannel_C_SetEnableCommandModeButton_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEmpty");
		
		UCommonPlayerListPannel_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsOwnPartyLeader
	 * 		Flags  -> ()
	 */
	bool UCommonPlayerListPannel_C::IsOwnPartyLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsOwnPartyLeader");
		
		UCommonPlayerListPannel_C_IsOwnPartyLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSendLikeInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSendLike                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::SetSendLikeInfo(bool bIsSendLike)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSendLikeInfo");
		
		UCommonPlayerListPannel_C_SetSendLikeInfo_Params params {};
		params.bIsSendLike = bIsSendLike;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitMailInbox
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitMailInbox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitMailInbox");
		
		UCommonPlayerListPannel_C_InitMailInbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetMailInBoxPlayerPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetMailInBoxPlayerPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetMailInBoxPlayerPannelMode");
		
		UCommonPlayerListPannel_C_SetMailInBoxPlayerPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeSendPlayerList
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitLikeSendPlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeSendPlayerList");
		
		UCommonPlayerListPannel_C_InitLikeSendPlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitContact
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitContact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitContact");
		
		UCommonPlayerListPannel_C_InitContact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetContactPlayerPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetContactPlayerPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetContactPlayerPannelMode");
		
		UCommonPlayerListPannel_C_SetContactPlayerPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateContact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerPannelTypeEnum                              NewPlayerPannelMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FContactListData                            NewContactListData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPlayerListPannel_C::UpdateContact(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FContactListData& NewContactListData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateContact");
		
		UCommonPlayerListPannel_C_UpdateContact_Params params {};
		params.NewPlayerPannelMode = NewPlayerPannelMode;
		params.NewContactListData = NewContactListData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitConsent
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitConsent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitConsent");
		
		UCommonPlayerListPannel_C_InitConsent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetConsentPlayerPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetConsentPlayerPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetConsentPlayerPannelMode");
		
		UCommonPlayerListPannel_C_SetConsentPlayerPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateConsent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerPannelTypeEnum                              NewPlayerPannelMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FContactListData                            NewContactListData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPlayerListPannel_C::UpdateConsent(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FContactListData& NewContactListData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateConsent");
		
		UCommonPlayerListPannel_C_UpdateConsent_Params params {};
		params.NewPlayerPannelMode = NewPlayerPannelMode;
		params.NewContactListData = NewContactListData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetBlockPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetBlockPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetBlockPannelMode");
		
		UCommonPlayerListPannel_C_SetBlockPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitBlock
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitBlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitBlock");
		
		UCommonPlayerListPannel_C_InitBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerPannelTypeEnum                              NewPlayerPannelMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlayerProfileSummaryData                   NewPlayerProfileSummaryData                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPlayerListPannel_C::UpdateBlock(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateBlock");
		
		UCommonPlayerListPannel_C_UpdateBlock_Params params {};
		params.NewPlayerPannelMode = NewPlayerPannelMode;
		params.NewPlayerProfileSummaryData = NewPlayerProfileSummaryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitSearch
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitSearch");
		
		UCommonPlayerListPannel_C_InitSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSearchPlayerPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetSearchPlayerPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSearchPlayerPannelMode");
		
		UCommonPlayerListPannel_C_SetSearchPlayerPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            GuildMemberData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bGuildMemberInviteList                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::SetGuildMemberData(const struct FGuildMemberData& GuildMemberData, bool bGuildMemberInviteList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberData");
		
		UCommonPlayerListPannel_C_SetGuildMemberData_Params params {};
		params.GuildMemberData = GuildMemberData;
		params.bGuildMemberInviteList = bGuildMemberInviteList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateSearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerPannelTypeEnum                              NewPlayerPannelMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlayerProfileSummaryData                   NewPlayerProfileSummaryData                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPlayerListPannel_C::UpdateSearch(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateSearch");
		
		UCommonPlayerListPannel_C_UpdateSearch_Params params {};
		params.NewPlayerPannelMode = NewPlayerPannelMode;
		params.NewPlayerProfileSummaryData = NewPlayerProfileSummaryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitFriend
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitFriend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitFriend");
		
		UCommonPlayerListPannel_C_InitFriend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendMemberPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetFriendMemberPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendMemberPannelMode");
		
		UCommonPlayerListPannel_C_SetFriendMemberPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerPannelTypeEnum                              NewPlayerPannelMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlayerProfileSummaryData                   NewPlayerProfileSummaryData                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPlayerListPannel_C::UpdateFriend(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateFriend");
		
		UCommonPlayerListPannel_C_UpdateFriend_Params params {};
		params.NewPlayerPannelMode = NewPlayerPannelMode;
		params.NewPlayerProfileSummaryData = NewPlayerProfileSummaryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitPartyMember
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitPartyMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitPartyMember");
		
		UCommonPlayerListPannel_C_InitPartyMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyMemberPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetPartyMemberPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyMemberPannelMode");
		
		UCommonPlayerListPannel_C_SetPartyMemberPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.EnableInviteCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::EnableInviteCommand(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.EnableInviteCommand");
		
		UCommonPlayerListPannel_C_EnableInviteCommand_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetVisibleConvocation
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetVisibleConvocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetVisibleConvocation");
		
		UCommonPlayerListPannel_C_SetVisibleConvocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyMemberProfileData
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetPartyMemberProfileData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyMemberProfileData");
		
		UCommonPlayerListPannel_C_SetPartyMemberProfileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteChangeConvocationDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConvocation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::OnCompleteChangeConvocationDelegate_Event(bool bConvocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteChangeConvocationDelegate_Event");
		
		UCommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event_Params params {};
		params.bConvocation = bConvocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCommonPlayerListPannel_C_BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendAdventureCard
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SendAdventureCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendAdventureCard");
		
		UCommonPlayerListPannel_C_SendAdventureCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UCommonPlayerListPannel_C_BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCharactersAdventurerCardSendDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendAdventureCardResult                    SendAdventureCardResult                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::OnCharactersAdventurerCardSendDelegate_Event(bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCharactersAdventurerCardSendDelegate_Event");
		
		UCommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.SendAdventureCardResult = SendAdventureCardResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetGuildMemberPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberPannelMode");
		
		UCommonPlayerListPannel_C_SetGuildMemberPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitGuildMember
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::InitGuildMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitGuildMember");
		
		UCommonPlayerListPannel_C_InitGuildMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.ClearProfileButtonStyle_Event
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::ClearProfileButtonStyle_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.ClearProfileButtonStyle_Event");
		
		UCommonPlayerListPannel_C_ClearProfileButtonStyle_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.ClearBlackListButtonStyle_Event
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::ClearBlackListButtonStyle_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.ClearBlackListButtonStyle_Event");
		
		UCommonPlayerListPannel_C_ClearBlackListButtonStyle_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SelectProfileButtonStyle_Event
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SelectProfileButtonStyle_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SelectProfileButtonStyle_Event");
		
		UCommonPlayerListPannel_C_SelectProfileButtonStyle_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.Construct");
		
		UCommonPlayerListPannel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.Destruct");
		
		UCommonPlayerListPannel_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreConstruct");
		
		UCommonPlayerListPannel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCommonProfileData
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetCommonProfileData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCommonProfileData");
		
		UCommonPlayerListPannel_C_SetCommonProfileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendLike
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SendLike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendLike");
		
		UCommonPlayerListPannel_C_SendLike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCaptureImageFace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Download                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::SetCaptureImageFace(bool Download)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCaptureImageFace");
		
		UCommonPlayerListPannel_C_SetCaptureImageFace_Params params {};
		params.Download = Download;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OpenPlayerProfile
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OpenPlayerProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OpenPlayerProfile");
		
		UCommonPlayerListPannel_C_OpenPlayerProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.Complete_OpenPlayerProfile_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::Complete_OpenPlayerProfile_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.Complete_OpenPlayerProfile_Event");
		
		UCommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event_Params params {};
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
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDirectChat_Event
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OnRequestDirectChat_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDirectChat_Event");
		
		UCommonPlayerListPannel_C_OnRequestDirectChat_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestTransitonMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestTransitonMenu(const class FString& MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestTransitonMenu");
		
		UCommonPlayerListPannel_C_OnRequestTransitonMenu_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.PlayerProfile_OnClose_Event
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::PlayerProfile_OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.PlayerProfile_OnClose_Event");
		
		UCommonPlayerListPannel_C_PlayerProfile_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature");
		
		UCommonPlayerListPannel_C_BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnUpdateBlackListEvent
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OnUpdateBlackListEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnUpdateBlackListEvent");
		
		UCommonPlayerListPannel_C_OnUpdateBlackListEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnSendAdvCard
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OnSendAdvCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnSendAdvCard");
		
		UCommonPlayerListPannel_C_OnSendAdvCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCheckBlockStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCheckBlockStatus                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPlayerListPannel_C::OnCheckBlockStatus(bool bCheckBlockStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCheckBlockStatus");
		
		UCommonPlayerListPannel_C_OnCheckBlockStatus_Params params {};
		params.bCheckBlockStatus = bCheckBlockStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetLikeSendPannelMode
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SetLikeSendPannelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetLikeSendPannelMode");
		
		UCommonPlayerListPannel_C_SetLikeSendPannelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateInfoAll
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::UpdateInfoAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateInfoAll");
		
		UCommonPlayerListPannel_C_UpdateInfoAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.ExecuteUbergraph_CommonPlayerListPannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::ExecuteUbergraph_CommonPlayerListPannel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.ExecuteUbergraph_CommonPlayerListPannel");
		
		UCommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnUpdateBlackList__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OnUpdateBlackList__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnUpdateBlackList__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnUpdateBlackList__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnPlayerProfileClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OnPlayerProfileClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnPlayerProfileClose__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnPlayerProfileClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendLikeEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::SendLikeEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendLikeEvent__DelegateSignature");
		
		UCommonPlayerListPannel_C_SendLikeEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDungeonPartyMemberButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestDungeonPartyMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDungeonPartyMemberButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberInviteCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OnRequestGuildMemberInviteCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberInviteCancel__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestGuildMemberInviteCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestGuildMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestMailInBoxButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestMailInBoxButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestMailInBoxButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteAdventureCardSend__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OnCompleteAdventureCardSend__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteAdventureCardSend__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnCompleteAdventureCardSend__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestContactButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestContactButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestContactButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestConsentButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestConsentButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestConsentButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestSearchButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestSearchButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestSearchButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestBlockButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestBlockButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestBlockButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.RequestTransitonMenu__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::RequestTransitonMenu__DelegateSignature(const class FString& MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.RequestTransitonMenu__DelegateSignature");
		
		UCommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDirectChat__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPlayerListPannel_C::OnRequestDirectChat__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDirectChat__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestDirectChat__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestFriendButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonPlayerListPannel_C*                   TargetPlayerListPannel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestFriendButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestFriendButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature_Params params {};
		params.TargetPlayerListPannel = TargetPlayerListPannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestPartyMemberButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         MemberState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlayerProfileSummaryData                   ProfileData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonPlayerListPannel_C::OnRequestPartyMemberButtonClicked__DelegateSignature(class USBPartyMemberState* MemberState, const struct FPlayerProfileSummaryData& ProfileData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestPartyMemberButtonClicked__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature_Params params {};
		params.MemberState = MemberState;
		params.ProfileData = ProfileData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestCancelInvite__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         MemberState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPlayerListPannel_C::OnRequestCancelInvite__DelegateSignature(class USBPartyMemberState* MemberState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestCancelInvite__DelegateSignature");
		
		UCommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature_Params params {};
		params.MemberState = MemberState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonPlayerListPannel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonPlayerListPannel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonPlayerListPannel.CommonPlayerListPannel_C");
		return ptr;
	}

}


