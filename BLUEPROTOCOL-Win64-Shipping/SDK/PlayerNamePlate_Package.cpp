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
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.ResetBuffIcon
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::ResetBuffIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.ResetBuffIcon");
		
		UPlayerNamePlate_C_ResetBuffIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetupBuffIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetupBuffIcon(class ASBCharacter* InCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetupBuffIcon");
		
		UPlayerNamePlate_C_SetupBuffIcon_Params params {};
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.UpdateFriendIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerProfileSummaryData>           InPlayerProfileSummaryData                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerNamePlate_C::UpdateFriendIcon(TArray<struct FPlayerProfileSummaryData>* InPlayerProfileSummaryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.UpdateFriendIcon");
		
		UPlayerNamePlate_C_UpdateFriendIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPlayerProfileSummaryData != nullptr)
			*InPlayerProfileSummaryData = params.InPlayerProfileSummaryData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.IsInteractionUIVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisibilty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::IsInteractionUIVisibility(bool* IsVisibilty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.IsInteractionUIVisibility");
		
		UPlayerNamePlate_C_IsInteractionUIVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisibilty != nullptr)
			*IsVisibilty = params.IsVisibilty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.CursorInOutAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::CursorInOutAnim(bool bin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.CursorInOutAnim");
		
		UPlayerNamePlate_C_CursorInOutAnim_Params params {};
		params.bin = bin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.Get Resurrection Remain Time Rate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::GetResurrectionRemainTimeRate(float* Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.Get Resurrection Remain Time Rate");
		
		UPlayerNamePlate_C_GetResurrectionRemainTimeRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rate != nullptr)
			*Rate = params.Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetLifeGaugeCurTintColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                TintColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetLifeGaugeCurTintColor(const struct FLinearColor& TintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetLifeGaugeCurTintColor");
		
		UPlayerNamePlate_C_SetLifeGaugeCurTintColor_Params params {};
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.Update Prev Life Gauge BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::UpdatePrevLifeGaugeBP(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.Update Prev Life Gauge BP");
		
		UPlayerNamePlate_C_UpdatePrevLifeGaugeBP_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.InitOptionConnect
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::InitOptionConnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.InitOptionConnect");
		
		UPlayerNamePlate_C_InitOptionConnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.TermOptionConnect
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::TermOptionConnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.TermOptionConnect");
		
		UPlayerNamePlate_C_TermOptionConnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnChangeNamePlateOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::OnChangeNamePlateOption(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnChangeNamePlateOption");
		
		UPlayerNamePlate_C_OnChangeNamePlateOption_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.InitOptionValue
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::InitOptionValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.InitOptionValue");
		
		UPlayerNamePlate_C_InitOptionValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.UpdateOptionNamePlate
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::UpdateOptionNamePlate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.UpdateOptionNamePlate");
		
		UPlayerNamePlate_C_UpdateOptionNamePlate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.InitOptions
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::InitOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.InitOptions");
		
		UPlayerNamePlate_C_InitOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.Bind TeamTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::BindTeamTag(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.Bind TeamTag");
		
		UPlayerNamePlate_C_BindTeamTag_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetAchievementSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementSelected                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetAchievementSelected(int32_t InAchievementSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetAchievementSelected");
		
		UPlayerNamePlate_C_SetAchievementSelected_Params params {};
		params.InAchievementSelected = InAchievementSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.InAwake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::InAwake(const class FName& InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.InAwake");
		
		UPlayerNamePlate_C_InAwake_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.JoinIninterrupt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerInterruptQuestComponent*            InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInFirst                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::JoinIninterrupt(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.JoinIninterrupt");
		
		UPlayerNamePlate_C_JoinIninterrupt_Params params {};
		params.InComponent = InComponent;
		params.bInFirst = bInFirst;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.Leaveout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::Leaveout(const class FName& InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.Leaveout");
		
		UPlayerNamePlate_C_Leaveout_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.Repinterrupt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBInterruptQuestPlayInfo                   InPlayInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPlayerNamePlate_C::Repinterrupt(const struct FSBInterruptQuestPlayInfo& InPlayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.Repinterrupt");
		
		UPlayerNamePlate_C_Repinterrupt_Params params {};
		params.InPlayInfo = InPlayInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.RepTeam
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::RepTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.RepTeam");
		
		UPlayerNamePlate_C_RepTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SucInterruptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::SucInterruptQuest(const class FName& InQuestId, bool InSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SucInterruptQuest");
		
		UPlayerNamePlate_C_SucInterruptQuest_Params params {};
		params.InQuestId = InQuestId;
		params.InSuccess = InSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.Update Prog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerInterruptQuestComponent*            InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::UpdateProg(class USBPlayerInterruptQuestComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.Update Prog");
		
		UPlayerNamePlate_C_UpdateProg_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.BeginBind Party
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::BeginBindParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.BeginBind Party");
		
		UPlayerNamePlate_C_BeginBindParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.PartyUnbindDelegates
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::PartyUnbindDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.PartyUnbindDelegates");
		
		UPlayerNamePlate_C_PartyUnbindDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.UnbindAwakeInterruptQuestDelegete
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::UnbindAwakeInterruptQuestDelegete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.UnbindAwakeInterruptQuestDelegete");
		
		UPlayerNamePlate_C_UnbindAwakeInterruptQuestDelegete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnUpdateNameColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bParty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::OnUpdateNameColor(bool bParty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnUpdateNameColor");
		
		UPlayerNamePlate_C_OnUpdateNameColor_Params params {};
		params.bParty = bParty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.Construct");
		
		UPlayerNamePlate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetName");
		
		UPlayerNamePlate_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetHpRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HPRate                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetHpRate(float HPRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetHpRate");
		
		UPlayerNamePlate_C_SetHpRate_Params params {};
		params.HPRate = HPRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnSetHealChainUIVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::OnSetHealChainUIVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnSetHealChainUIVisibility");
		
		UPlayerNamePlate_C_OnSetHealChainUIVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnChangeLifeGaugeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHealChainColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::OnChangeLifeGaugeColor(bool IsHealChainColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnChangeLifeGaugeColor");
		
		UPlayerNamePlate_C_OnChangeLifeGaugeColor_Params params {};
		params.IsHealChainColor = IsHealChainColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetTeamNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TeamNumber                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetTeamNumber(int32_t TeamNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetTeamNumber");
		
		UPlayerNamePlate_C_SetTeamNumber_Params params {};
		params.TeamNumber = TeamNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetCharacter_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetCharacter_Internal(class ASBCharacter* InCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetCharacter_Internal");
		
		UPlayerNamePlate_C_SetCharacter_Internal_Params params {};
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetHostility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHostility                                       Hostility                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetHostility(ESBHostility Hostility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetHostility");
		
		UPlayerNamePlate_C_SetHostility_Params params {};
		params.Hostility = Hostility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetInitialHpRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HPRate                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetInitialHpRate(float HPRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetInitialHpRate");
		
		UPlayerNamePlate_C_SetInitialHpRate_Params params {};
		params.HPRate = HPRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UPlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
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
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetNameVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInVisibility                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::SetNameVisibility(bool bInVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetNameVisibility");
		
		UPlayerNamePlate_C_SetNameVisibility_Params params {};
		params.bInVisibility = bInVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInVisibility                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::SetHpGaugeVisibility(bool bInVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeVisibility");
		
		UPlayerNamePlate_C_SetHpGaugeVisibility_Params params {};
		params.bInVisibility = bInVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeWidthRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidthRate                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetHpGaugeWidthRate(float InWidthRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeWidthRate");
		
		UPlayerNamePlate_C_SetHpGaugeWidthRate_Params params {};
		params.InWidthRate = InWidthRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.Destruct");
		
		UPlayerNamePlate_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetDepth");
		
		UPlayerNamePlate_C_SetDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetChargeMax
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::SetChargeMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetChargeMax");
		
		UPlayerNamePlate_C_SetChargeMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.AutoChangeInvisible
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::AutoChangeInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.AutoChangeInvisible");
		
		UPlayerNamePlate_C_AutoChangeInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.AutoChangeVisible
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::AutoChangeVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.AutoChangeVisible");
		
		UPlayerNamePlate_C_AutoChangeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnFinishedFadeAnime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFadeIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::OnFinishedFadeAnime(bool IsFadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnFinishedFadeAnime");
		
		UPlayerNamePlate_C_OnFinishedFadeAnime_Params params {};
		params.IsFadeIn = IsFadeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.UnbindPlayerCommunicateDelegate
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::UnbindPlayerCommunicateDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.UnbindPlayerCommunicateDelegate");
		
		UPlayerNamePlate_C_UnbindPlayerCommunicateDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.UnbindOnClientRecieveBattleStatusDelegete
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::UnbindOnClientRecieveBattleStatusDelegete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.UnbindOnClientRecieveBattleStatusDelegete");
		
		UPlayerNamePlate_C_UnbindOnClientRecieveBattleStatusDelegete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.UnbindVisibleSettingChangeDelegate
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::UnbindVisibleSettingChangeDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.UnbindVisibleSettingChangeDelegate");
		
		UPlayerNamePlate_C_UnbindVisibleSettingChangeDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetInteractionTargetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInVisibility                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerNamePlate_C::SetInteractionTargetVisibility(bool bInVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetInteractionTargetVisibility");
		
		UPlayerNamePlate_C_SetInteractionTargetVisibility_Params params {};
		params.bInVisibility = bInVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.SetScreenPositionOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InScreenPositionOffset                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.SetScreenPositionOffset");
		
		UPlayerNamePlate_C_SetScreenPositionOffset_Params params {};
		params.InScreenPositionOffset = InScreenPositionOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnDisplayStart
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::OnDisplayStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnDisplayStart");
		
		UPlayerNamePlate_C_OnDisplayStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.PlayerStateSettingAfter
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::PlayerStateSettingAfter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.PlayerStateSettingAfter");
		
		UPlayerNamePlate_C_PlayerStateSettingAfter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent");
		
		UPlayerNamePlate_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.PlayerStateRelationshipSetting
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::PlayerStateRelationshipSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.PlayerStateRelationshipSetting");
		
		UPlayerNamePlate_C_PlayerStateRelationshipSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBTensionTagType                                  TensionTag                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::CustomEvent_2(ESBTensionTagType TensionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_2");
		
		UPlayerNamePlate_C_CustomEvent_2_Params params {};
		params.TensionTag = TensionTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerProfileSummaryData>           PlayerProfileSummaryData                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerNamePlate_C::CustomEvent_3(TArray<struct FPlayerProfileSummaryData> PlayerProfileSummaryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_3");
		
		UPlayerNamePlate_C_CustomEvent_3_Params params {};
		params.PlayerProfileSummaryData = PlayerProfileSummaryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnUpdatenSimplycityPartyOn
	 * 		Flags  -> ()
	 */
	void UPlayerNamePlate_C::OnUpdatenSimplycityPartyOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnUpdatenSimplycityPartyOn");
		
		UPlayerNamePlate_C_OnUpdatenSimplycityPartyOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.UpdateTension
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBTensionTagType                                  InTensionTagId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::UpdateTension(ESBTensionTagType InTensionTagId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.UpdateTension");
		
		UPlayerNamePlate_C_UpdateTension_Params params {};
		params.InTensionTagId = InTensionTagId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.ExecuteUbergraph_PlayerNamePlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::ExecuteUbergraph_PlayerNamePlate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.ExecuteUbergraph_PlayerNamePlate");
		
		UPlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnChangeScale__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::OnChangeScale__DelegateSignature(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnChangeScale__DelegateSignature");
		
		UPlayerNamePlate_C_OnChangeScale__DelegateSignature_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerNamePlate.PlayerNamePlate_C.OnChangeDrawSize__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   DrawSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerNamePlate_C::OnChangeDrawSize__DelegateSignature(const struct FVector2D& DrawSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerNamePlate.PlayerNamePlate_C.OnChangeDrawSize__DelegateSignature");
		
		UPlayerNamePlate_C_OnChangeDrawSize__DelegateSignature_Params params {};
		params.DrawSize = DrawSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerNamePlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerNamePlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerNamePlate.PlayerNamePlate_C");
		return ptr;
	}

}


