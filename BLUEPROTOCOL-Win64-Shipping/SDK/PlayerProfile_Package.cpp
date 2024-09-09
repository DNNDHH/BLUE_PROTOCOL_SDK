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
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.UpdatePlayerComment
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::UpdatePlayerComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.UpdatePlayerComment");
		
		UPlayerProfile_C_UpdatePlayerComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Update Player Screenshot
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::UpdatePlayerScreenshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Update Player Screenshot");
		
		UPlayerProfile_C_UpdatePlayerScreenshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.UpdatePlayerName
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::UpdatePlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.UpdatePlayerName");
		
		UPlayerProfile_C_UpdatePlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.IsAbleToTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::IsAbleToTeleport(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.IsAbleToTeleport");
		
		UPlayerProfile_C_IsAbleToTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetBtnGroup1Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::SetBtnGroup1Visibility(bool bInIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetBtnGroup1Visibility");
		
		UPlayerProfile_C_SetBtnGroup1Visibility_Params params {};
		params.bInIsVisible = bInIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.IsPlayingMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::IsPlayingMission(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.IsPlayingMission");
		
		UPlayerProfile_C_IsPlayingMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetActiveGuildInviteButton
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::SetActiveGuildInviteButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetActiveGuildInviteButton");
		
		UPlayerProfile_C_SetActiveGuildInviteButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.UnbindBlackList
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::UnbindBlackList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.UnbindBlackList");
		
		UPlayerProfile_C_UnbindBlackList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BindBlackList
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BindBlackList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BindBlackList");
		
		UPlayerProfile_C_BindBlackList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetCommunicateBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsComunicateMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::SetCommunicateBtn(bool IsComunicateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetCommunicateBtn");
		
		UPlayerProfile_C_SetCommunicateBtn_Params params {};
		params.IsComunicateMode = IsComunicateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetRankingBtn
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::SetRankingBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetRankingBtn");
		
		UPlayerProfile_C_SetRankingBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Show Send Adventure Card Error
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InWasSuccessful                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendAdventureCardResult                    InSendAdventureResult                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool UPlayerProfile_C::ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Show Send Adventure Card Error");
		
		UPlayerProfile_C_ShowSendAdventureCardError_Params params {};
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
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Show Player Profile Error Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTextNameId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::ShowPlayerProfileErrorMessage(const class FName& InTextNameId, int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Show Player Profile Error Message");
		
		UPlayerProfile_C_ShowPlayerProfileErrorMessage_Params params {};
		params.InTextNameId = InTextNameId;
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.IsCalledCommandGuildMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::IsCalledCommandGuildMenu(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.IsCalledCommandGuildMenu");
		
		UPlayerProfile_C_IsCalledCommandGuildMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                                                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2DDynamic*                           InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetSwitcher*                             InWidgetSwitcher                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::SetBG(class UImage* , float InScale, const struct FVector2D& InPosition, class UWidget* Widget, class UTexture2DDynamic* InTexture, class UWidgetSwitcher* InWidgetSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetBG");
		
		UPlayerProfile_C_SetBG_Params params {};
		params. = ;
		params.InScale = InScale;
		params.InPosition = InPosition;
		params.Widget = Widget;
		params.InTexture = InTexture;
		params.InWidgetSwitcher = InWidgetSwitcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitTeleportBtnInfo
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitTeleportBtnInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitTeleportBtnInfo");
		
		UPlayerProfile_C_InitTeleportBtnInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitProfilePartyInfo
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitProfilePartyInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitProfilePartyInfo");
		
		UPlayerProfile_C_InitProfilePartyInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitVisibilityForButtons
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitVisibilityForButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitVisibilityForButtons");
		
		UPlayerProfile_C_InitVisibilityForButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitTensionInfo
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitTensionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitTensionInfo");
		
		UPlayerProfile_C_InitTensionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitPlayerCharacterPositionInfo
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitPlayerCharacterPositionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitPlayerCharacterPositionInfo");
		
		UPlayerProfile_C_InitPlayerCharacterPositionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitScreenshotInfo
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitScreenshotInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitScreenshotInfo");
		
		UPlayerProfile_C_InitScreenshotInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitProfileLikeInfo
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitProfileLikeInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitProfileLikeInfo");
		
		UPlayerProfile_C_InitProfileLikeInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitComment
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitComment");
		
		UPlayerProfile_C_InitComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetPlayerProfileMenuDetailData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                DetailData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerProfile_C::SetPlayerProfileMenuDetailData(const struct FPlayerProfileMenuDetailData& DetailData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetPlayerProfileMenuDetailData");
		
		UPlayerProfile_C_SetPlayerProfileMenuDetailData_Params params {};
		params.DetailData = DetailData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Set Equip LIstData
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::SetEquipLIstData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Set Equip LIstData");
		
		UPlayerProfile_C_SetEquipLIstData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.InitReport
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitReport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.InitReport");
		
		UPlayerProfile_C_InitReport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.IsInvited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsInvited                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::IsInvited(bool* bIsInvited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.IsInvited");
		
		UPlayerProfile_C_IsInvited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsInvited != nullptr)
			*bIsInvited = params.bIsInvited;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.CanSendPartyInvitation
	 * 		Flags  -> ()
	 */
	bool UPlayerProfile_C::CanSendPartyInvitation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.CanSendPartyInvitation");
		
		UPlayerProfile_C_CanSendPartyInvitation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.RemoveBlocker
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::RemoveBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.RemoveBlocker");
		
		UPlayerProfile_C_RemoveBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.AddBlocker
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::AddBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.AddBlocker");
		
		UPlayerProfile_C_AddBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.UpdateClassData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerProfile_C::UpdateClassData(const struct FPlayerProfileMenuDetailData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.UpdateClassData");
		
		UPlayerProfile_C_UpdateClassData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.GetClassLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::GetClassLevel(ESBClassType Type, int32_t Exp, int32_t* Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.GetClassLevel");
		
		UPlayerProfile_C_GetClassLevel_Params params {};
		params.Type = Type;
		params.Exp = Exp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Level != nullptr)
			*Level = params.Level;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.AllDataButtonDisabled
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::AllDataButtonDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.AllDataButtonDisabled");
		
		UPlayerProfile_C_AllDataButtonDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetActiveDirectChatButton
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::SetActiveDirectChatButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetActiveDirectChatButton");
		
		UPlayerProfile_C_SetActiveDirectChatButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetActivePartyInviteButton
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::SetActivePartyInviteButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetActivePartyInviteButton");
		
		UPlayerProfile_C_SetActivePartyInviteButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_bIsEnabled_1
	 * 		Flags  -> ()
	 */
	bool UPlayerProfile_C::Get_PartyInviteButton_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_bIsEnabled_1");
		
		UPlayerProfile_C_Get_PartyInviteButton_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Get_DirectChatButton_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UPlayerProfile_C::Get_DirectChatButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Get_DirectChatButton_Visibility_1");
		
		UPlayerProfile_C_Get_DirectChatButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UPlayerProfile_C::Get_PartyInviteButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_Visibility_1");
		
		UPlayerProfile_C_Get_PartyInviteButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Get_BlackListButtonText_Text_1
	 * 		Flags  -> ()
	 */
	class FText UPlayerProfile_C::Get_BlackListButtonText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Get_BlackListButtonText_Text_1");
		
		UPlayerProfile_C_Get_BlackListButtonText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Get_AddBlackListTextLabel_Text_1
	 * 		Flags  -> ()
	 */
	class FText UPlayerProfile_C::Get_AddBlackListTextLabel_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Get_AddBlackListTextLabel_Text_1");
		
		UPlayerProfile_C_Get_AddBlackListTextLabel_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetLocationFollowerUIVisible
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::SetLocationFollowerUIVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetLocationFollowerUIVisible");
		
		UPlayerProfile_C_SetLocationFollowerUIVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.UpdateFollow
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::UpdateFollow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.UpdateFollow");
		
		UPlayerProfile_C_UpdateFollow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Init_BlackList
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::Init_BlackList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Init_BlackList");
		
		UPlayerProfile_C_Init_BlackList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                DetailData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsFavorite                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMe                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDungeon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSaveName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSearchMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::Init(const struct FPlayerProfileMenuDetailData& DetailData, bool IsFavorite, bool IsMe, bool IsDungeon, bool IsSaveName, bool IsSearchMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Init");
		
		UPlayerProfile_C_Init_Params params {};
		params.DetailData = DetailData;
		params.IsFavorite = IsFavorite;
		params.IsMe = IsMe;
		params.IsDungeon = IsDungeon;
		params.IsSaveName = IsSaveName;
		params.IsSearchMode = IsSearchMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.CloseMenu");
		
		UPlayerProfile_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnLoaded_112687964F2BE7FAB45CE180EB11CC13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnLoaded_112687964F2BE7FAB45CE180EB11CC13(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnLoaded_112687964F2BE7FAB45CE180EB11CC13");
		
		UPlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67");
		
		UPlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4");
		
		UPlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnGetedGuildDetailData_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuildData                                  InGuildData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerProfile_C::OnGetedGuildDetailData_Event(int32_t RetCode, const struct FGuildData& InGuildData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnGetedGuildDetailData_Event");
		
		UPlayerProfile_C_OnGetedGuildDetailData_Event_Params params {};
		params.RetCode = RetCode;
		params.InGuildData = InGuildData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_1");
		
		UPlayerProfile_C_WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnCompletedGuildEntry_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnCompletedGuildEntry_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnCompletedGuildEntry_Event");
		
		UPlayerProfile_C_OnCompletedGuildEntry_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.UnbindGuildDetailDelegate
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::UnbindGuildDetailDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.UnbindGuildDetailDelegate");
		
		UPlayerProfile_C_UnbindGuildDetailDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnPress_QuickAccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigAction                                 QuickAccess                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnPress_QuickAccess(ESBKeyConfigAction QuickAccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnPress_QuickAccess");
		
		UPlayerProfile_C_OnPress_QuickAccess_Params params {};
		params.QuickAccess = QuickAccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Construct");
		
		UPlayerProfile_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Destruct");
		
		UPlayerProfile_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BlackListDialogResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::BlackListDialogResult(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BlackListDialogResult");
		
		UPlayerProfile_C_BlackListDialogResult_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnAddBlackListPlayerDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::OnAddBlackListPlayerDelegate_Event(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnAddBlackListPlayerDelegate_Event");
		
		UPlayerProfile_C_OnAddBlackListPlayerDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnRemoveBlackListPlayerDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::OnRemoveBlackListPlayerDelegate_Event(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnRemoveBlackListPlayerDelegate_Event");
		
		UPlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnPress_Cancel");
		
		UPlayerProfile_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnAnimationFinished");
		
		UPlayerProfile_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnCloseParentsMenu
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnCloseParentsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnCloseParentsMenu");
		
		UPlayerProfile_C_OnCloseParentsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.CloseByQuickAccess
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::CloseByQuickAccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.CloseByQuickAccess");
		
		UPlayerProfile_C_CloseByQuickAccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListedDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBlackListed                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      SenderId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnNotificationBlackListedDelegate_Event(bool bBlackListed, const class FString& SenderId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListedDelegate_Event");
		
		UPlayerProfile_C_OnNotificationBlackListedDelegate_Event_Params params {};
		params.bBlackListed = bBlackListed;
		params.SenderId = SenderId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnGuildDataArriverd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnGuildDataArriverd(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnGuildDataArriverd");
		
		UPlayerProfile_C_OnGuildDataArriverd_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnNotifyBlocked_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::OnNotifyBlocked_Event(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnNotifyBlocked_Event");
		
		UPlayerProfile_C_OnNotifyBlocked_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnTeleport_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnTeleport_Event(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnTeleport_Event");
		
		UPlayerProfile_C_OnTeleport_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnInvited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnInvited(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnInvited");
		
		UPlayerProfile_C_OnInvited_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Teleport
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::Teleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Teleport");
		
		UPlayerProfile_C_Teleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SendFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSendAdventureCardResult                    SendAdventureCardResult                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UPlayerProfile_C::SendFriend(bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SendFriend");
		
		UPlayerProfile_C_SendFriend_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.SendAdventureCardResult = SendAdventureCardResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnGetBlackListDataEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FPlayerProfileSummaryData>           CharacterName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            totalPageNum                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            currentPageNum                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::OnGetBlackListDataEvent(bool bWasSuccessful, TArray<struct FPlayerProfileSummaryData> CharacterName, int32_t totalPageNum, int32_t currentPageNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnGetBlackListDataEvent");
		
		UPlayerProfile_C_OnGetBlackListDataEvent_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.CharacterName = CharacterName;
		params.totalPageNum = totalPageNum;
		params.currentPageNum = currentPageNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Initialize Guilds
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::InitializeGuilds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Initialize Guilds");
		
		UPlayerProfile_C_InitializeGuilds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SendLike
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::SendLike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SendLike");
		
		UPlayerProfile_C_SendLike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.PhotoViewerCloseCompleteEvent
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::PhotoViewerCloseCompleteEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.PhotoViewerCloseCompleteEvent");
		
		UPlayerProfile_C_PhotoViewerCloseCompleteEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.GuildDetailsClose
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::GuildDetailsClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.GuildDetailsClose");
		
		UPlayerProfile_C_GuildDetailsClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_1");
		
		UPlayerProfile_C_WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2");
		
		UPlayerProfile_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.CustomEvent_1");
		
		UPlayerProfile_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnClosedFromPlayerReport
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnClosedFromPlayerReport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnClosedFromPlayerReport");
		
		UPlayerProfile_C_OnClosedFromPlayerReport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.AddBlackListEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::AddBlackListEvent(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.AddBlackListEvent");
		
		UPlayerProfile_C_AddBlackListEvent_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.RemoveBlackListEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::RemoveBlackListEvent(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.RemoveBlackListEvent");
		
		UPlayerProfile_C_RemoveBlackListEvent_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnCheckBlockStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCheckBlockStatus                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::OnCheckBlockStatus(bool bCheckBlockStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnCheckBlockStatus");
		
		UPlayerProfile_C_OnCheckBlockStatus_Params params {};
		params.bCheckBlockStatus = bCheckBlockStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetDecoFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      InWG                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::SetDecoFrame(int32_t InItemID, class UImage* InWG)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetDecoFrame");
		
		UPlayerProfile_C_SetDecoFrame_Params params {};
		params.InItemID = InItemID;
		params.InWG = InWG;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetBgPattern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::SetBgPattern(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetBgPattern");
		
		UPlayerProfile_C_SetBgPattern_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.SetAdventureCardFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::SetAdventureCardFrame(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.SetAdventureCardFrame");
		
		UPlayerProfile_C_SetAdventureCardFrame_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutItemId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature(int32_t OutItemId, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature_Params params {};
		params.OutItemId = OutItemId;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.ProductDetailMenuCloseEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::ProductDetailMenuCloseEvent(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.ProductDetailMenuCloseEvent");
		
		UPlayerProfile_C_ProductDetailMenuCloseEvent_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    outLikeCountList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<bool>                                       outLikeBtnEnableList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerProfile_C::BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnableList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature");
		
		UPlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLikeCountList != nullptr)
			*outLikeCountList = params.outLikeCountList;
		if (outLikeBtnEnableList != nullptr)
			*outLikeBtnEnableList = params.outLikeBtnEnableList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.PartyInvite_Dialog_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::PartyInvite_Dialog_Event(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.PartyInvite_Dialog_Event");
		
		UPlayerProfile_C_PartyInvite_Dialog_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.Matched_Cancel_Invite_Dialog_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::Matched_Cancel_Invite_Dialog_Event(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.Matched_Cancel_Invite_Dialog_Event");
		
		UPlayerProfile_C_Matched_Cancel_Invite_Dialog_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.ExecuteUbergraph_PlayerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::ExecuteUbergraph_PlayerProfile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.ExecuteUbergraph_PlayerProfile");
		
		UPlayerProfile_C_ExecuteUbergraph_PlayerProfile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnClickedPhotoLikeBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    outLikeCountList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<bool>                                       outLikeBtnEnbaleList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerProfile_C::OnClickedPhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnbaleList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnClickedPhotoLikeBtn__DelegateSignature");
		
		UPlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature_Params params {};
		
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
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnSendAdventureCard__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnSendAdventureCard__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnSendAdventureCard__DelegateSignature");
		
		UPlayerProfile_C_OnSendAdventureCard__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnUpdateBlackList__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnUpdateBlackList__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnUpdateBlackList__DelegateSignature");
		
		UPlayerProfile_C_OnUpdateBlackList__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnSendLikeEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnSendLikeEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnSendLikeEvent__DelegateSignature");
		
		UPlayerProfile_C_OnSendLikeEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnTravel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnTravel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnTravel__DelegateSignature");
		
		UPlayerProfile_C_OnTravel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnDestructForPlayerList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               AnyClose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::OnDestructForPlayerList__DelegateSignature(const struct FPlayerProfileMenuDetailData& Data, bool AnyClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnDestructForPlayerList__DelegateSignature");
		
		UPlayerProfile_C_OnDestructForPlayerList__DelegateSignature_Params params {};
		params.Data = Data;
		params.AnyClose = AnyClose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnNotificationBlackListed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListed__DelegateSignature");
		
		UPlayerProfile_C_OnNotificationBlackListed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.RemoveBlackList__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::RemoveBlackList__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.RemoveBlackList__DelegateSignature");
		
		UPlayerProfile_C_RemoveBlackList__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.RequestTransitionMenu__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerProfile_C::RequestTransitionMenu__DelegateSignature(const class FString& MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.RequestTransitionMenu__DelegateSignature");
		
		UPlayerProfile_C_RequestTransitionMenu__DelegateSignature_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnDestruct__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerProfile_C::OnDestruct__DelegateSignature(const struct FPlayerProfileMenuDetailData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnDestruct__DelegateSignature");
		
		UPlayerProfile_C_OnDestruct__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnRequestDirectChat__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnRequestDirectChat__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnRequestDirectChat__DelegateSignature");
		
		UPlayerProfile_C_OnRequestDirectChat__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.AddBlackList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                ProfileData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerProfile_C::AddBlackList__DelegateSignature(const struct FPlayerProfileMenuDetailData& ProfileData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.AddBlackList__DelegateSignature");
		
		UPlayerProfile_C_AddBlackList__DelegateSignature_Params params {};
		params.ProfileData = ProfileData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.UpdateFollowData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileMenuDetailData                DetailData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsUnFollow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfile_C::UpdateFollowData__DelegateSignature(const struct FPlayerProfileMenuDetailData& DetailData, bool IsUnFollow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.UpdateFollowData__DelegateSignature");
		
		UPlayerProfile_C_UpdateFollowData__DelegateSignature_Params params {};
		params.DetailData = DetailData;
		params.IsUnFollow = IsUnFollow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfile.PlayerProfile_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfile_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfile.PlayerProfile_C.OnClose__DelegateSignature");
		
		UPlayerProfile_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerProfile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerProfile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerProfile.PlayerProfile_C");
		return ptr;
	}

}


