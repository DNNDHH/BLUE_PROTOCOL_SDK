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
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText_ByPartyMemberState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         InPartyState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBRestrictTextLength                              InRestrictText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_DefaultGameInstance_C::GetXboxPrivacyText_ByPartyMemberState(class USBPartyMemberState* InPartyState, const class FText& InText, ESBRestrictTextLength InRestrictText, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText_ByPartyMemberState");
		
		UBP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState_Params params {};
		params.InPartyState = InPartyState;
		params.InText = InText;
		params.InRestrictText = InRestrictText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPrivilegeType                                   InPrivilegeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InCharacterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InPlatformUserId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBRestrictTextLength                              InRestrictText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_DefaultGameInstance_C::GetXboxPrivacyText(ESBPrivilegeType InPrivilegeType, const class FString& InCharacterId, const class FString& InPlatformUserId, const class FText& InText, ESBRestrictTextLength InRestrictText, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText");
		
		UBP_DefaultGameInstance_C_GetXboxPrivacyText_Params params {};
		params.InPrivilegeType = InPrivilegeType;
		params.InCharacterId = InCharacterId;
		params.InPlatformUserId = InPlatformUserId;
		params.InText = InText;
		params.InRestrictText = InRestrictText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyResponseCommonErrorMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MsgCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ShowPartyResponseCommonErrorMessage(int32_t MsgCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyResponseCommonErrorMessage");
		
		UBP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage_Params params {};
		params.MsgCode = MsgCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyMigrationMessage
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::ShowPartyMigrationMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyMigrationMessage");
		
		UBP_DefaultGameInstance_C_ShowPartyMigrationMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowSimpleMessageLite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_DefaultGameInstance_C::ShowSimpleMessageLite(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowSimpleMessageLite");
		
		UBP_DefaultGameInstance_C_ShowSimpleMessageLite_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowMatchingFailedMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBMatchingFailureType                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PenaltyForMe                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MinuteToEndPenalty                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ShowMatchingFailedMessage(ESBMatchingFailureType Type, bool PenaltyForMe, int32_t MinuteToEndPenalty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowMatchingFailedMessage");
		
		UBP_DefaultGameInstance_C_ShowMatchingFailedMessage_Params params {};
		params.Type = Type;
		params.PenaltyForMe = PenaltyForMe;
		params.MinuteToEndPenalty = MinuteToEndPenalty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnLoaded_88632A3A4D923436604E88879DC1917B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::OnLoaded_88632A3A4D923436604E88879DC1917B(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnLoaded_88632A3A4D923436604E88879DC1917B");
		
		UBP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.AdventureBoardError_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::AdventureBoardError_Event(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.AdventureBoardError_Event");
		
		UBP_DefaultGameInstance_C_AdventureBoardError_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRequestMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyGameState*                           PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyRequestMatchmaking(class USBPartyGameState* PartyState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRequestMatchmaking");
		
		UBP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking_Params params {};
		params.PartyState = PartyState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SenderId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SenderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SenderCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBPrivilegeType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyInviteReceived(const class FString& SenderId, const class FString& SenderName, const class FString& SenderCharacterId, ESBPrivilegeType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteReceived");
		
		UBP_DefaultGameInstance_C_ReceivePartyInviteReceived_Params params {};
		params.SenderId = SenderId;
		params.SenderName = SenderName;
		params.SenderCharacterId = SenderCharacterId;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteResponseReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SenderId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SenderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAccepted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResultCode                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBPrivilegeType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyInviteResponseReceived(const class FString& SenderId, const class FString& SenderName, bool bIsAccepted, const class FString& CharacterId, int32_t ResultCode, ESBPrivilegeType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteResponseReceived");
		
		UBP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived_Params params {};
		params.SenderId = SenderId;
		params.SenderName = SenderName;
		params.bIsAccepted = bIsAccepted;
		params.CharacterId = CharacterId;
		params.ResultCode = ResultCode;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberJoined
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         JoinedMember                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bExistingMember                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsRejoin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyMemberJoined(class USBPartyMemberState* JoinedMember, bool bExistingMember, bool bIsRejoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberJoined");
		
		UBP_DefaultGameInstance_C_ReceivePartyMemberJoined_Params params {};
		params.JoinedMember = JoinedMember;
		params.bExistingMember = bExistingMember;
		params.bIsRejoin = bIsRejoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeaving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         LeavingMember                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsKicked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyMemberLeaving(class USBPartyMemberState* LeavingMember, bool bIsKicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeaving");
		
		UBP_DefaultGameInstance_C_ReceivePartyMemberLeaving_Params params {};
		params.LeavingMember = LeavingMember;
		params.bIsKicked = bIsKicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePromotePartyMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         PromoteMember                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceivePromotePartyMember(class USBPartyMemberState* PromoteMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePromotePartyMember");
		
		UBP_DefaultGameInstance_C_ReceivePromotePartyMember_Params params {};
		params.PromoteMember = PromoteMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveJoinInviteParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NotApprovedReason                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceiveJoinInviteParty(bool bWasSuccessful, int32_t NotApprovedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveJoinInviteParty");
		
		UBP_DefaultGameInstance_C_ReceiveJoinInviteParty_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.NotApprovedReason = NotApprovedReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveSendInvitationComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPartySystemTextType                             InType                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      RecipientName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ResultCode                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBPrivilegeType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceiveSendInvitationComplete(ESBPartySystemTextType InType, const class FString& RecipientName, bool bWasSuccessful, int32_t ResultCode, const class FString& CharacterId, ESBPrivilegeType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveSendInvitationComplete");
		
		UBP_DefaultGameInstance_C_ReceiveSendInvitationComplete_Params params {};
		params.InType = InType;
		params.RecipientName = RecipientName;
		params.bWasSuccessful = bWasSuccessful;
		params.ResultCode = ResultCode;
		params.CharacterId = CharacterId;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyGameState*                           PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsKicked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyLeft(class USBPartyGameState* PartyState, bool bIsKicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyLeft");
		
		UBP_DefaultGameInstance_C_ReceivePartyLeft_Params params {};
		params.PartyState = PartyState;
		params.bIsKicked = bIsKicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyJoined
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyGameState*                           PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsRejoin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyJoined(class USBPartyGameState* PartyState, bool bIsRejoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyJoined");
		
		UBP_DefaultGameInstance_C_ReceivePartyJoined_Params params {};
		params.PartyState = PartyState;
		params.bIsRejoin = bIsRejoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInvitesChanged
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyInvitesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInvitesChanged");
		
		UBP_DefaultGameInstance_C_ReceivePartyInvitesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyConvocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyGameState*                           PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanceled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MigrationResponseCode                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyConvocation(class USBPartyGameState* PartyState, bool bCanceled, int32_t MigrationResponseCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyConvocation");
		
		UBP_DefaultGameInstance_C_ReceivePartyConvocation_Params params {};
		params.PartyState = PartyState;
		params.bCanceled = bCanceled;
		params.MigrationResponseCode = MigrationResponseCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRetireGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyGameState*                           PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromLeader                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyRetireGame(class USBPartyGameState* PartyState, bool bFromLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRetireGame");
		
		UBP_DefaultGameInstance_C_ReceivePartyRetireGame_Params params {};
		params.PartyState = PartyState;
		params.bFromLeader = bFromLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyGameState*                           PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsReleased                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyMemberLeft(class USBPartyGameState* PartyState, bool bIsReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeft");
		
		UBP_DefaultGameInstance_C_ReceivePartyMemberLeft_Params params {};
		params.PartyState = PartyState;
		params.bIsReleased = bIsReleased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMigration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyGameState*                           PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bExecuted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyMigration(class USBPartyGameState* PartyState, bool bExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMigration");
		
		UBP_DefaultGameInstance_C_ReceivePartyMigration_Params params {};
		params.PartyState = PartyState;
		params.bExecuted = bExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bExecuted                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBPartySystemTextType                             MessageType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MigrationResponseCode                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ExecuteMigration(bool bExecuted, ESBPartySystemTextType MessageType, int32_t MigrationResponseCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigration");
		
		UBP_DefaultGameInstance_C_ExecuteMigration_Params params {};
		params.bExecuted = bExecuted;
		params.MessageType = MessageType;
		params.MigrationResponseCode = MigrationResponseCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.MigrationHandleTravelError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::MigrationHandleTravelError(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.MigrationHandleTravelError");
		
		UBP_DefaultGameInstance_C_MigrationHandleTravelError_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberDungeonEntryChanged
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::ReceivePartyMemberDungeonEntryChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberDungeonEntryChanged");
		
		UBP_DefaultGameInstance_C_ReceivePartyMemberDungeonEntryChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchingFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBMatchingFailureType                             FailureType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PenaltyForMe                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MinuteToEndPenalty                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceiveMatchingFailed(ESBMatchingFailureType FailureType, bool PenaltyForMe, int32_t MinuteToEndPenalty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchingFailed");
		
		UBP_DefaultGameInstance_C_ReceiveMatchingFailed_Params params {};
		params.FailureType = FailureType;
		params.PenaltyForMe = PenaltyForMe;
		params.MinuteToEndPenalty = MinuteToEndPenalty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySameMapMemberCountChanged
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::ReceivePartySameMapMemberCountChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySameMapMemberCountChanged");
		
		UBP_DefaultGameInstance_C_ReceivePartySameMapMemberCountChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigrationWaitMembers
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::ExecuteMigrationWaitMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigrationWaitMembers");
		
		UBP_DefaultGameInstance_C_ExecuteMigrationWaitMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.NotifyExecutePartyServerReConnectError
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::NotifyExecutePartyServerReConnectError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.NotifyExecutePartyServerReConnectError");
		
		UBP_DefaultGameInstance_C_NotifyExecutePartyServerReConnectError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyGameState*                           PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceivePartySimplycityChange(class USBPartyGameState* PartyState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChange");
		
		UBP_DefaultGameInstance_C_ReceivePartySimplycityChange_Params params {};
		params.PartyState = PartyState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChangeForSolo
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::ReceivePartySimplycityChangeForSolo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChangeForSolo");
		
		UBP_DefaultGameInstance_C_ReceivePartySimplycityChangeForSolo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.TryShowPartyJoinedMessage
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::TryShowPartyJoinedMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.TryShowPartyJoinedMessage");
		
		UBP_DefaultGameInstance_C_TryShowPartyJoinedMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENetworkFailure                                    FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsServer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DefaultGameInstance_C::HandleNetworkError(ENetworkFailure FailureType, bool bIsServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkError");
		
		UBP_DefaultGameInstance_C_HandleNetworkError_Params params {};
		params.FailureType = FailureType;
		params.bIsServer = bIsServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleTravelError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETravelFailure                                     FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::HandleTravelError(ETravelFailure FailureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleTravelError");
		
		UBP_DefaultGameInstance_C_HandleTravelError_Params params {};
		params.FailureType = FailureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafePlayingTimeNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NetworkCafeTotalTimePlayedToday                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::HandleNetworkCafePlayingTimeNotification(int32_t NetworkCafeTotalTimePlayedToday)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafePlayingTimeNotification");
		
		UBP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification_Params params {};
		params.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchedGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMatchingGameState*                        MatchedGame                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ReceiveMatchedGame(class USBMatchingGameState* MatchedGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchedGame");
		
		UBP_DefaultGameInstance_C_ReceiveMatchedGame_Params params {};
		params.MatchedGame = MatchedGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafeRewardNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NetworkCafeTotalTimePlayedToday                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::HandleNetworkCafeRewardNotification(int32_t NetworkCafeTotalTimePlayedToday)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafeRewardNotification");
		
		UBP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification_Params params {};
		params.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteUbergraph_BP_DefaultGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DefaultGameInstance_C::ExecuteUbergraph_BP_DefaultGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteUbergraph_BP_DefaultGameInstance");
		
		UBP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnJoinInviteParty__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::OnJoinInviteParty__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnJoinInviteParty__DelegateSignature");
		
		UBP_DefaultGameInstance_C_OnJoinInviteParty__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnJoin__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::OnJoin__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnJoin__DelegateSignature");
		
		UBP_DefaultGameInstance_C_OnJoin__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnTravel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::OnTravel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnTravel__DelegateSignature");
		
		UBP_DefaultGameInstance_C_OnTravel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnFailedMatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::OnFailedMatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnFailedMatch__DelegateSignature");
		
		UBP_DefaultGameInstance_C_OnFailedMatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnPartyInviteReceived__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::OnPartyInviteReceived__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnPartyInviteReceived__DelegateSignature");
		
		UBP_DefaultGameInstance_C_OnPartyInviteReceived__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnCancelMatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::OnCancelMatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnCancelMatch__DelegateSignature");
		
		UBP_DefaultGameInstance_C_OnCancelMatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnPartyMemberUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_DefaultGameInstance_C::OnPartyMemberUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnPartyMemberUpdate__DelegateSignature");
		
		UBP_DefaultGameInstance_C_OnPartyMemberUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DefaultGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DefaultGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DefaultGameInstance.BP_DefaultGameInstance_C");
		return ptr;
	}

}


