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
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetIsSoloPlay
	 * 		Flags  -> ()
	 */
	bool ABP_DHCMeasurer_C::GetIsSoloPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetIsSoloPlay");
		
		ABP_DHCMeasurer_C_GetIsSoloPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_DHCMeasurer_C::GetScore(class APlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetScore");
		
		ABP_DHCMeasurer_C_GetScore_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_MesuringStartDate
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::OnRep_MesuringStartDate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_MesuringStartDate");
		
		ABP_DHCMeasurer_C_OnRep_MesuringStartDate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_ExitIntervalDate
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::OnRep_ExitIntervalDate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_ExitIntervalDate");
		
		ABP_DHCMeasurer_C_OnRep_ExitIntervalDate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.ResetLocalPlayerStatusForEnter
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::ResetLocalPlayerStatusForEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.ResetLocalPlayerStatusForEnter");
		
		ABP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.RequestBGM
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::RequestBGM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.RequestBGM");
		
		ABP_DHCMeasurer_C_RequestBGM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetCurrentPartyId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PartyId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::GetCurrentPartyId(class FString* PartyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetCurrentPartyId");
		
		ABP_DHCMeasurer_C_GetCurrentPartyId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyId != nullptr)
			*PartyId = params.PartyId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_DHCStatus
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::OnRep_DHCStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_DHCStatus");
		
		ABP_DHCMeasurer_C_OnRep_DHCStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCRemainTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LeftTimeSec                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::GetDHCRemainTime(float* LeftTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCRemainTime");
		
		ABP_DHCMeasurer_C_GetDHCRemainTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftTimeSec != nullptr)
			*LeftTimeSec = params.LeftTimeSec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              TotalDamage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamagePerSec                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::GetDHCPlayerInfo(int32_t Index, class APlayerState** PlayerState, class FString* Name, float* TotalDamage, float* DamagePerSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerInfo");
		
		ABP_DHCMeasurer_C_GetDHCPlayerInfo_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
		if (Name != nullptr)
			*Name = params.Name;
		if (TotalDamage != nullptr)
			*TotalDamage = params.TotalDamage;
		if (DamagePerSec != nullptr)
			*DamagePerSec = params.DamagePerSec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerNum                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::GetDHCPlayerNum(int32_t* PlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerNum");
		
		ABP_DHCMeasurer_C_GetDHCPlayerNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerNum != nullptr)
			*PlayerNum = params.PlayerNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetPlayerStatusRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::GetPlayerStatusRef(class AActor* Player, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetPlayerStatusRef");
		
		ABP_DHCMeasurer_C_GetPlayerStatusRef_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.IsInUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUse                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHCMeasurer_C::IsInUse(bool* IsUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.IsInUse");
		
		ABP_DHCMeasurer_C_IsInUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUse != nullptr)
			*IsUse = params.IsUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.RegisterPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 UserController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Initialized                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHCMeasurer_C::RegisterPlayers(class AController* UserController, bool* Initialized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.RegisterPlayers");
		
		ABP_DHCMeasurer_C_RegisterPlayers_Params params {};
		params.UserController = UserController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Initialized != nullptr)
			*Initialized = params.Initialized;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.TimeOutWarp
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::TimeOutWarp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.TimeOutWarp");
		
		ABP_DHCMeasurer_C_TimeOutWarp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCInitalize
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::DHCInitalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCInitalize");
		
		ABP_DHCMeasurer_C_DHCInitalize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.CheckStart
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::CheckStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.CheckStart");
		
		ABP_DHCMeasurer_C_CheckStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_InWarp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::CE_InWarp(class ASBPlayerCharacter* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_InWarp");
		
		ABP_DHCMeasurer_C_CE_InWarp_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_BurstCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAttribute                                       ElementType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::CE_BurstCount(ESBAttribute ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_BurstCount");
		
		ABP_DHCMeasurer_C_CE_BurstCount_Params params {};
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.Init
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.Init");
		
		ABP_DHCMeasurer_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_OutWarp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHCMeasurer_C::CE_OutWarp(class AActor* OtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_OutWarp");
		
		ABP_DHCMeasurer_C_CE_OutWarp_Params params {};
		params.OtherActor = OtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      CuaseCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::AddDamage(class AActor* CuaseCharacter, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamage");
		
		ABP_DHCMeasurer_C_AddDamage_Params params {};
		params.CuaseCharacter = CuaseCharacter;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamageEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBDamageEvent                              DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::AddDamageEnemy(class ASBEnemyCharacter* DamagedActor, float Damage, const struct FSBDamageEvent& DamageEvent, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamageEnemy");
		
		ABP_DHCMeasurer_C_AddDamageEnemy_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageEvent = DamageEvent;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.ReceiveTick");
		
		ABP_DHCMeasurer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.InitPartyPlayerList
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::InitPartyPlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.InitPartyPlayerList");
		
		ABP_DHCMeasurer_C_InitPartyPlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.ShowMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EN_DHCMessage                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::ShowMessage(EN_DHCMessage Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.ShowMessage");
		
		ABP_DHCMeasurer_C_ShowMessage_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class APlayerController*>                   RegisterPlayers                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_DHCMeasurer_C::DHCClientInit(TArray<class APlayerController*> RegisterPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientInit");
		
		ABP_DHCMeasurer_C_DHCClientInit_Params params {};
		params.RegisterPlayers = RegisterPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class APlayerController*>                   ExitMembers                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_DHCMeasurer_C::DHCClientExit(TArray<class APlayerController*> ExitMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientExit");
		
		ABP_DHCMeasurer_C_DHCClientExit_Params params {};
		params.ExitMembers = ExitMembers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.InittedHUD
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::InittedHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.InittedHUD");
		
		ABP_DHCMeasurer_C_InittedHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetMokujinInvincible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Invincible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHCMeasurer_C::SetMokujinInvincible(bool Invincible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetMokujinInvincible");
		
		ABP_DHCMeasurer_C_SetMokujinInvincible_Params params {};
		params.Invincible = Invincible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetCurrentMesurerForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Clear                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHCMeasurer_C::SetCurrentMesurerForPlayer(class APawn* PlayerCharacter, bool Clear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetCurrentMesurerForPlayer");
		
		ABP_DHCMeasurer_C_SetCurrentMesurerForPlayer_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.Clear = Clear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.LocalWarpIntoMeasurer
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::LocalWarpIntoMeasurer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.LocalWarpIntoMeasurer");
		
		ABP_DHCMeasurer_C_LocalWarpIntoMeasurer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.ExecuteUbergraph_BP_DHCMeasurer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHCMeasurer_C::ExecuteUbergraph_BP_DHCMeasurer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.ExecuteUbergraph_BP_DHCMeasurer");
		
		ABP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_LocalPlayerQuit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::DHC_LocalPlayerQuit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_LocalPlayerQuit__DelegateSignature");
		
		ABP_DHCMeasurer_C_DHC_LocalPlayerQuit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_LocalPlayerJoined__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_DHCMeasurer_C::DHC_LocalPlayerJoined__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_LocalPlayerJoined__DelegateSignature");
		
		ABP_DHCMeasurer_C_DHC_LocalPlayerJoined__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_StateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EN_DHCStatus                                       DHCState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LocalPlayerJoined                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHCMeasurer_C::DHC_StateChanged__DelegateSignature(EN_DHCStatus DHCState, bool LocalPlayerJoined)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_StateChanged__DelegateSignature");
		
		ABP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature_Params params {};
		params.DHCState = DHCState;
		params.LocalPlayerJoined = LocalPlayerJoined;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DHCMeasurer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DHCMeasurer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DHCMeasurer.BP_DHCMeasurer_C");
		return ptr;
	}

}


