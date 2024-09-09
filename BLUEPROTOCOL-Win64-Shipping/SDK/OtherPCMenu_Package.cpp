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
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnClickedPhotoLikeBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    outLikeCountList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<bool>                                       outLikeBtnEnbaleList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOtherPCMenu_C::OnClickedPhotoLikeBtn(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnbaleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnClickedPhotoLikeBtn");
		
		UOtherPCMenu_C_OnClickedPhotoLikeBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLikeCountList != nullptr)
			*outLikeCountList = params.outLikeCountList;
		if (outLikeBtnEnbaleList != nullptr)
			*outLikeBtnEnbaleList = params.outLikeBtnEnbaleList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.Update Player Comment
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::UpdatePlayerComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.Update Player Comment");
		
		UOtherPCMenu_C_UpdatePlayerComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerName
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::UpdatePlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerName");
		
		UOtherPCMenu_C_UpdatePlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Download                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCMenu_C::UpdatePlayerIcon(bool* Download)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerIcon");
		
		UOtherPCMenu_C_UpdatePlayerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Download != nullptr)
			*Download = params.Download;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.Show Player Profile Error Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTextNameId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::ShowPlayerProfileErrorMessage(const class FName& InTextNameId, int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.Show Player Profile Error Message");
		
		UOtherPCMenu_C_ShowPlayerProfileErrorMessage_Params params {};
		params.InTextNameId = InTextNameId;
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.ShowSendAdventureCardError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InWasSuccessful                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendAdventureCardResult                    InSendAdventureResult                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool UOtherPCMenu_C::ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.ShowSendAdventureCardError");
		
		UOtherPCMenu_C_ShowSendAdventureCardError_Params params {};
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
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.SetPlatformIcon
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::SetPlatformIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.SetPlatformIcon");
		
		UOtherPCMenu_C_SetPlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.SetPlayerProfile_LikeBtn
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::SetPlayerProfile_LikeBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.SetPlayerProfile_LikeBtn");
		
		UOtherPCMenu_C_SetPlayerProfile_LikeBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.GetPlayerCharacter
	 * 		Flags  -> ()
	 */
	class ASBPlayerCharacter* UOtherPCMenu_C::GetPlayerCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.GetPlayerCharacter");
		
		UOtherPCMenu_C_GetPlayerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.GetOtherPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerState*                              OutPlayerState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::GetOtherPlayerState(class ASBPlayerState** OutPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.GetOtherPlayerState");
		
		UOtherPCMenu_C_GetOtherPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerState != nullptr)
			*OutPlayerState = params.OutPlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.ShowMessage_DisableProfile
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::ShowMessage_DisableProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.ShowMessage_DisableProfile");
		
		UOtherPCMenu_C_ShowMessage_DisableProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.ShowMessage_IsBlackListed
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::ShowMessage_IsBlackListed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.ShowMessage_IsBlackListed");
		
		UOtherPCMenu_C_ShowMessage_IsBlackListed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.CanSendInvitationSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCMenu_C::CanSendInvitationSelf(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.CanSendInvitationSelf");
		
		UOtherPCMenu_C_CanSendInvitationSelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UpdateBlackListState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBlackList                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCMenu_C::UpdateBlackListState(bool IsBlackList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UpdateBlackListState");
		
		UOtherPCMenu_C_UpdateBlackListState_Params params {};
		params.IsBlackList = IsBlackList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UpdatePartyIconVisible
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::UpdatePartyIconVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UpdatePartyIconVisible");
		
		UOtherPCMenu_C_UpdatePartyIconVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.CheckProfileEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCMenu_C::CheckProfileEnable(bool* IsOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.CheckProfileEnable");
		
		UOtherPCMenu_C_CheckProfileEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOk != nullptr)
			*IsOk = params.IsOk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.GetSendAdventurerCardButtonLabelText
	 * 		Flags  -> ()
	 */
	class FText UOtherPCMenu_C::GetSendAdventurerCardButtonLabelText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.GetSendAdventurerCardButtonLabelText");
		
		UOtherPCMenu_C_GetSendAdventurerCardButtonLabelText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.SetRootVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCMenu_C::SetRootVisibility(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.SetRootVisibility");
		
		UOtherPCMenu_C_SetRootVisibility_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.InitProfileDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                ProfileData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOtherPCMenu_C::InitProfileDetail(const struct FPlayerProfileMenuDetailData& ProfileData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.InitProfileDetail");
		
		UOtherPCMenu_C_InitProfileDetail_Params params {};
		params.ProfileData = ProfileData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBClassType                                       InRole                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBTensionTagType                                  InTensionTagId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InComment                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSendLIke                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OnlineStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::Init(const class FText& InName, ESBClassType InRole, ESBTensionTagType InTensionTagId, const class FText& InComment, int32_t InAchievementId, bool IsSendLIke, int32_t OnlineStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.Init");
		
		UOtherPCMenu_C_Init_Params params {};
		params.InName = InName;
		params.InRole = InRole;
		params.InTensionTagId = InTensionTagId;
		params.InComment = InComment;
		params.InAchievementId = InAchievementId;
		params.IsSendLIke = IsSendLIke;
		params.OnlineStatus = OnlineStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.CloseMenu");
		
		UOtherPCMenu_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.Initialize GuildData
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::InitializeGuildData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.Initialize GuildData");
		
		UOtherPCMenu_C_InitializeGuildData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.Construct");
		
		UOtherPCMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.Destruct");
		
		UOtherPCMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::CustomEvent_1(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.CustomEvent_1");
		
		UOtherPCMenu_C_CustomEvent_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnPress_Cancel");
		
		UOtherPCMenu_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnGetPlayerProfileDetailMenuDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::OnGetPlayerProfileDetailMenuDelegate_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnGetPlayerProfileDetailMenuDelegate_Event");
		
		UOtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event_Params params {};
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
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.Close
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.Close");
		
		UOtherPCMenu_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnAnimationFinished");
		
		UOtherPCMenu_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnCancelMatching_Dialog_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::OnCancelMatching_Dialog_Event(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnCancelMatching_Dialog_Event");
		
		UOtherPCMenu_C_OnCancelMatching_Dialog_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnGameOverDelegate_Event_1
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::OnGameOverDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnGameOverDelegate_Event_1");
		
		UOtherPCMenu_C_OnGameOverDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UnbindPlayerConcernedListDelegate
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::UnbindPlayerConcernedListDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UnbindPlayerConcernedListDelegate");
		
		UOtherPCMenu_C_UnbindPlayerConcernedListDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UnbindGameOverDelegate
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::UnbindGameOverDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UnbindGameOverDelegate");
		
		UOtherPCMenu_C_UnbindGameOverDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.AddBlackList_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                ProfileData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOtherPCMenu_C::AddBlackList_Event(const struct FPlayerProfileMenuDetailData& ProfileData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.AddBlackList_Event");
		
		UOtherPCMenu_C_AddBlackList_Event_Params params {};
		params.ProfileData = ProfileData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.RemoveBlackList
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::RemoveBlackList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.RemoveBlackList");
		
		UOtherPCMenu_C_RemoveBlackList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UnbindBlackListDelegate
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::UnbindBlackListDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UnbindBlackListDelegate");
		
		UOtherPCMenu_C_UnbindBlackListDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.Close_Force
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::Close_Force()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.Close_Force");
		
		UOtherPCMenu_C_Close_Force_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.start_construct
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::start_construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.start_construct");
		
		UOtherPCMenu_C_start_construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnNotificationBlackListedDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBlackListed                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      SenderId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::OnNotificationBlackListedDelegate_Event(bool bBlackListed, const class FString& SenderId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnNotificationBlackListedDelegate_Event");
		
		UOtherPCMenu_C_OnNotificationBlackListedDelegate_Event_Params params {};
		params.bBlackListed = bBlackListed;
		params.SenderId = SenderId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UnBindNotificationBlackListedDelegate
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::UnBindNotificationBlackListedDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UnBindNotificationBlackListedDelegate");
		
		UOtherPCMenu_C_UnBindNotificationBlackListedDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnJankenUIDelegate_Event_1
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::OnJankenUIDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnJankenUIDelegate_Event_1");
		
		UOtherPCMenu_C_OnJankenUIDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.UnBindJankenUIDelegate
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::UnBindJankenUIDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.UnBindJankenUIDelegate");
		
		UOtherPCMenu_C_UnBindJankenUIDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.SendMess(SendAdv)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendAdventureCardResult                    SendAdventureCardResult                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UOtherPCMenu_C::SendMessSendAdv(bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.SendMess(SendAdv)");
		
		UOtherPCMenu_C_SendMessSendAdv_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.SendAdventureCardResult = SendAdventureCardResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnRequestDirectChat_Event
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::OnRequestDirectChat_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnRequestDirectChat_Event");
		
		UOtherPCMenu_C_OnRequestDirectChat_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.SendLike
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::SendLike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.SendLike");
		
		UOtherPCMenu_C_SendLike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UOtherPCMenu_C_BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnSendLikeEvent
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::OnSendLikeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnSendLikeEvent");
		
		UOtherPCMenu_C_OnSendLikeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnCheckBlockStatus_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCheckBlockStatus                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCMenu_C::OnCheckBlockStatus_Event(bool bCheckBlockStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnCheckBlockStatus_Event");
		
		UOtherPCMenu_C_OnCheckBlockStatus_Event_Params params {};
		params.bCheckBlockStatus = bCheckBlockStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.ResultClose
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::ResultClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.ResultClose");
		
		UOtherPCMenu_C_ResultClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.CustomEvent_2");
		
		UOtherPCMenu_C_CustomEvent_2_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnSendAdventureCard
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::OnSendAdventureCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnSendAdventureCard");
		
		UOtherPCMenu_C_OnSendAdventureCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.ExecuteUbergraph_OtherPCMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCMenu_C::ExecuteUbergraph_OtherPCMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.ExecuteUbergraph_OtherPCMenu");
		
		UOtherPCMenu_C_ExecuteUbergraph_OtherPCMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnDirectChat__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::OnDirectChat__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnDirectChat__DelegateSignature");
		
		UOtherPCMenu_C_OnDirectChat__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCMenu.OtherPCMenu_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCMenu_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCMenu.OtherPCMenu_C.OnClose__DelegateSignature");
		
		UOtherPCMenu_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOtherPCMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOtherPCMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OtherPCMenu.OtherPCMenu_C");
		return ptr;
	}

}


