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
	 * 		Name   -> Function PartyIcon.PartyIcon_C.RequestSetIconColorName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ColorName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::RequestSetIconColorName(const class FString& ColorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.RequestSetIconColorName");
		
		UPartyIcon_C_RequestSetIconColorName_Params params {};
		params.ColorName = ColorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.CheckLeader
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::CheckLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.CheckLeader");
		
		UPartyIcon_C_CheckLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.Failed Retry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::FailedRetry(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.Failed Retry");
		
		UPartyIcon_C_FailedRetry_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.CheckNPC
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::CheckNPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.CheckNPC");
		
		UPartyIcon_C_CheckNPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.CheckGroup
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::CheckGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.CheckGroup");
		
		UPartyIcon_C_CheckGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.CheckFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerProfileSummaryData>           InFriendList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPartyIcon_C::CheckFollow(TArray<struct FPlayerProfileSummaryData> InFriendList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.CheckFollow");
		
		UPartyIcon_C_CheckFollow_Params params {};
		params.InFriendList = InFriendList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.CheckParty
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::CheckParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.CheckParty");
		
		UPartyIcon_C_CheckParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.InterruptQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::InterruptQuest(const class FName& InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.InterruptQuest");
		
		UPartyIcon_C_InterruptQuest_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.OnJoinInterrupt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerInterruptQuestComponent*            InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInFirst                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyIcon_C::OnJoinInterrupt(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.OnJoinInterrupt");
		
		UPartyIcon_C_OnJoinInterrupt_Params params {};
		params.InComponent = InComponent;
		params.bInFirst = bInFirst;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.InterruptPlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBInterruptQuestPlayInfo                   InPlayInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPartyIcon_C::InterruptPlayerInfo(const struct FSBInterruptQuestPlayInfo& InPlayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.InterruptPlayerInfo");
		
		UPartyIcon_C_InterruptPlayerInfo_Params params {};
		params.InPlayInfo = InPlayInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.InterruptTeamMemberUpdate
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::InterruptTeamMemberUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.InterruptTeamMemberUpdate");
		
		UPartyIcon_C_InterruptTeamMemberUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.InterruptSuccsess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyIcon_C::InterruptSuccsess(const class FName& InQuestId, bool InSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.InterruptSuccsess");
		
		UPartyIcon_C_InterruptSuccsess_Params params {};
		params.InQuestId = InQuestId;
		params.InSuccess = InSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.InterruptProgressUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerInterruptQuestComponent*            InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::InterruptProgressUpdate(class USBPlayerInterruptQuestComponent* InComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.InterruptProgressUpdate");
		
		UPartyIcon_C_InterruptProgressUpdate_Params params {};
		params.InComponent = InComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.SetOwnerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                OwnerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::SetOwnerCharacter(class ASBCharacter* OwnerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.SetOwnerCharacter");
		
		UPartyIcon_C_SetOwnerCharacter_Params params {};
		params.OwnerCharacter = OwnerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.OnFollowStateChanged
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::OnFollowStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.OnFollowStateChanged");
		
		UPartyIcon_C_OnFollowStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.InterruptUpdate
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::InterruptUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.InterruptUpdate");
		
		UPartyIcon_C_InterruptUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.Retry_Group_Init
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::Retry_Group_Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.Retry_Group_Init");
		
		UPartyIcon_C_Retry_Group_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.Retry_Init_Follow
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::Retry_Init_Follow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.Retry_Init_Follow");
		
		UPartyIcon_C_Retry_Init_Follow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.OnSetOwnerPlayerCharacter
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::OnSetOwnerPlayerCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.OnSetOwnerPlayerCharacter");
		
		UPartyIcon_C_OnSetOwnerPlayerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.OnPartyMemberUpdate
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::OnPartyMemberUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.OnPartyMemberUpdate");
		
		UPartyIcon_C_OnPartyMemberUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.Init
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.Init");
		
		UPartyIcon_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.Construct");
		
		UPartyIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.RequestReInit
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::RequestReInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.RequestReInit");
		
		UPartyIcon_C_RequestReInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.FreeOnce
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::FreeOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.FreeOnce");
		
		UPartyIcon_C_FreeOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.OnAttachedClientPlayerStateDelegate_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerController*                         PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::OnAttachedClientPlayerStateDelegate__1(class ASBPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.OnAttachedClientPlayerStateDelegate_イベント_1");
		
		UPartyIcon_C_OnAttachedClientPlayerStateDelegate__1_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.Destruct");
		
		UPartyIcon_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.PartyPlayerStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPartyMemberState*                         MemberState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::PartyPlayerStateChange(class USBPartyMemberState* MemberState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.PartyPlayerStateChange");
		
		UPartyIcon_C_PartyPlayerStateChange_Params params {};
		params.MemberState = MemberState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.PartyUnbindDelegates
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::PartyUnbindDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.PartyUnbindDelegates");
		
		UPartyIcon_C_PartyUnbindDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.FollowUnbindDelegate
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::FollowUnbindDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.FollowUnbindDelegate");
		
		UPartyIcon_C_FollowUnbindDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.RequestShow
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::RequestShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.RequestShow");
		
		UPartyIcon_C_RequestShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.RequestSetAnimationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AnimationSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::RequestSetAnimationSpeed(float AnimationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.RequestSetAnimationSpeed");
		
		UPartyIcon_C_RequestSetAnimationSpeed_Params params {};
		params.AnimationSpeed = AnimationSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.RequestHide
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::RequestHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.RequestHide");
		
		UPartyIcon_C_RequestHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.UnbindQuestDelegete
	 * 		Flags  -> ()
	 */
	void UPartyIcon_C::UnbindQuestDelegete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.UnbindQuestDelegete");
		
		UPartyIcon_C_UnbindQuestDelegete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.RequestSetOwnerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                OwnerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::RequestSetOwnerCharacter(class ASBCharacter* OwnerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.RequestSetOwnerCharacter");
		
		UPartyIcon_C_RequestSetOwnerCharacter_Params params {};
		params.OwnerCharacter = OwnerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyIcon.PartyIcon_C.ExecuteUbergraph_PartyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyIcon_C::ExecuteUbergraph_PartyIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyIcon.PartyIcon_C.ExecuteUbergraph_PartyIcon");
		
		UPartyIcon_C_ExecuteUbergraph_PartyIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyIcon.PartyIcon_C");
		return ptr;
	}

}


