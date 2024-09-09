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
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.DeadNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DeadCharacterName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_PlayerCharacter_C::DeadNotifyMessage(const class FText& DeadCharacterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DeadNotifyMessage");
		
		ABP_PlayerCharacter_C_DeadNotifyMessage_Params params {};
		params.DeadCharacterName = DeadCharacterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetEnemyStepJumpCollisionComponent
	 * 		Flags  -> ()
	 */
	class USphereComponent* ABP_PlayerCharacter_C::GetEnemyStepJumpCollisionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetEnemyStepJumpCollisionComponent");
		
		ABP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffsetNamePlateLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OffsetDistance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::OffsetNamePlateLocation(bool IsOffset, float OffsetDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffsetNamePlateLocation");
		
		ABP_PlayerCharacter_C_OffsetNamePlateLocation_Params params {};
		params.IsOffset = IsOffset;
		params.OffsetDistance = OffsetDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateClassHUD
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::CreateClassHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateClassHUD");
		
		ABP_PlayerCharacter_C_CreateClassHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Imagine Arts Voice Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               Event                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBAkEventLOD                                      LOD                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::GetImagineArtsVoiceEvent(class UAkAudioEvent** Event, ESBAkEventLOD* LOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Imagine Arts Voice Event");
		
		ABP_PlayerCharacter_C_GetImagineArtsVoiceEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Event != nullptr)
			*Event = params.Event;
		if (LOD != nullptr)
			*LOD = params.LOD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitEquipWeaponStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    OutEquipWeaponStatus                                       (Parm, OutParm)
	 */
	void ABP_PlayerCharacter_C::InitEquipWeaponStatus(TArray<int32_t>* OutEquipWeaponStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitEquipWeaponStatus");
		
		ABP_PlayerCharacter_C_InitEquipWeaponStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEquipWeaponStatus != nullptr)
			*OutEquipWeaponStatus = params.OutEquipWeaponStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDamageReaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStunInfo                                 StunInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		E_DamageReaction                                   DamageReaction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::GetDamageReaction(const struct FSBStunInfo& StunInfo, E_DamageReaction* DamageReaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDamageReaction");
		
		ABP_PlayerCharacter_C_GetDamageReaction_Params params {};
		params.StunInfo = StunInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageReaction != nullptr)
			*DamageReaction = params.DamageReaction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnSheathe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponEquipType                                 EquipType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::UnSheathe(ESBWeaponEquipType EquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnSheathe");
		
		ABP_PlayerCharacter_C_UnSheathe_Params params {};
		params.EquipType = EquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponSocketOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::GetWeaponSocketOffset(const class FName& SocketName, struct FVector* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponSocketOffset");
		
		ABP_PlayerCharacter_C_GetWeaponSocketOffset_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSocketOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::GetSocketOffset(const class FName& SocketName, struct FVector* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSocketOffset");
		
		ABP_PlayerCharacter_C_GetSocketOffset_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugPrintEquipWeapon
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::DebugPrintEquipWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugPrintEquipWeapon");
		
		ABP_PlayerCharacter_C_DebugPrintEquipWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponAnimationUnsheathe
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::WeaponAnimationUnsheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponAnimationUnsheathe");
		
		ABP_PlayerCharacter_C_WeaponAnimationUnsheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponAnimationSheathe
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::WeaponAnimationSheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponAnimationSheathe");
		
		ABP_PlayerCharacter_C_WeaponAnimationSheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OpenOtherPCMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          InOtherPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::OpenOtherPCMenu(class ASBPlayerCharacter* InOtherPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OpenOtherPCMenu");
		
		ABP_PlayerCharacter_C_OpenOtherPCMenu_Params params {};
		params.InOtherPC = InOtherPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeLifeGaugeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHealChainColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::ChangeLifeGaugeColor(bool IsHealChainColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeLifeGaugeColor");
		
		ABP_PlayerCharacter_C_ChangeLifeGaugeColor_Params params {};
		params.IsHealChainColor = IsHealChainColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableAtGatheringPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::EnableAtGatheringPopup(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableAtGatheringPopup");
		
		ABP_PlayerCharacter_C_EnableAtGatheringPopup_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateAtGatheringPopup
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::UpdateAtGatheringPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateAtGatheringPopup");
		
		ABP_PlayerCharacter_C_UpdateAtGatheringPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.Sheathe
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::Sheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Sheathe");
		
		ABP_PlayerCharacter_C_Sheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHairMaterial
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::UpdateHairMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHairMaterial");
		
		ABP_PlayerCharacter_C_UpdateHairMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript");
		
		ABP_PlayerCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_4");
		
		ABP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3");
		
		ABP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_3");
		
		ABP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2");
		
		ABP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_1");
		
		ABP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_DebugMenu_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_DebugMenu_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_DebugMenu_K2Node_InputActionEvent_2");
		
		ABP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_1");
		
		ABP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeathDelegate_イベント
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::OnDeathDelegate_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeathDelegate_イベント");
		
		ABP_PlayerCharacter_C_OnDeathDelegate__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay");
		
		ABP_PlayerCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInteraction");
		
		ABP_PlayerCharacter_C_OnInteraction_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetOtherPCMenu
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::SetOtherPCMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetOtherPCMenu");
		
		ABP_PlayerCharacter_C_SetOtherPCMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousStateName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NextStateName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveStateChange");
		
		ABP_PlayerCharacter_C_ReceiveStateChange_Params params {};
		params.PreviousStateName = PreviousStateName;
		params.NextStateName = NextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowHitIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InHitPosition                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InDamageCauser                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ShowHitIndicator(const struct FVector& InHitPosition, class AActor* InDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowHitIndicator");
		
		ABP_PlayerCharacter_C_ShowHitIndicator_Params params {};
		params.InHitPosition = InHitPosition;
		params.InDamageCauser = InDamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetInitialMiniMapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerMiniMapInfo                        Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::OnSetInitialMiniMapInfo(const struct FSBPlayerMiniMapInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetInitialMiniMapInfo");
		
		ABP_PlayerCharacter_C_OnSetInitialMiniMapInfo_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeadNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_PlayerCharacter_C::OnDeadNotifyMessage(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeadNotifyMessage");
		
		ABP_PlayerCharacter_C_OnDeadNotifyMessage_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_6(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_6");
		
		ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_6_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_9(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_9");
		
		ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_9_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_13(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_13");
		
		ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_13_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_18
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_18(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_18");
		
		ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_18_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_21
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_21(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_21");
		
		ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_21_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryClientTravelWithFadeout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Portal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::TryClientTravelWithFadeout(const class FString& URL, const class FString& Portal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryClientTravelWithFadeout");
		
		ABP_PlayerCharacter_C_TryClientTravelWithFadeout_Params params {};
		params.URL = URL;
		params.Portal = Portal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_PlayerCharacter_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCastSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               Position                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::OnCastSkill(ESkillActionPosition Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCastSkill");
		
		ABP_PlayerCharacter_C_OnCastSkill_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick");
		
		ABP_PlayerCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage");
		
		ABP_PlayerCharacter_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveEndInitialLoad
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ReceiveEndInitialLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveEndInitialLoad");
		
		ABP_PlayerCharacter_C_ReceiveEndInitialLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickMovingNoise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::TickMovingNoise(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickMovingNoise");
		
		ABP_PlayerCharacter_C_TickMovingNoise_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseOtherPCMenu
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::OnCloseOtherPCMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseOtherPCMenu");
		
		ABP_PlayerCharacter_C_OnCloseOtherPCMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDead
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::OnDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDead");
		
		ABP_PlayerCharacter_C_OnDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ForceCloseOtherPCMenu
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ForceCloseOtherPCMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ForceCloseOtherPCMenu");
		
		ABP_PlayerCharacter_C_ForceCloseOtherPCMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnOtherPCMenuTargetLost
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::OnOtherPCMenuTargetLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnOtherPCMenuTargetLost");
		
		ABP_PlayerCharacter_C_OnOtherPCMenuTargetLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveSheathe
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ReceiveSheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveSheathe");
		
		ABP_PlayerCharacter_C_ReceiveSheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheathe
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ReceiveUnsheathe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheathe");
		
		ABP_PlayerCharacter_C_ReceiveUnsheathe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheatheByEquipType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponEquipType                                 EquipType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ReceiveUnsheatheByEquipType(ESBWeaponEquipType EquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheatheByEquipType");
		
		ABP_PlayerCharacter_C_ReceiveUnsheatheByEquipType_Params params {};
		params.EquipType = EquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLastHitActorInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::OnLastHitActorInfo(class AActor* HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLastHitActorInfo");
		
		ABP_PlayerCharacter_C_OnLastHitActorInfo_Params params {};
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDamageCollisionTransformType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerDamageCollisionTransformType              TransformType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::SetDamageCollisionTransformType(ESBPlayerDamageCollisionTransformType TransformType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDamageCollisionTransformType");
		
		ABP_PlayerCharacter_C_SetDamageCollisionTransformType_Params params {};
		params.TransformType = TransformType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::CustomEvent(bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CustomEvent");
		
		ABP_PlayerCharacter_C_CustomEvent_Params params {};
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelayImpl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WithFade                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::TeleportWithDelayImpl(const struct FVector& Location, const struct FRotator& Rotation, bool WithFade, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelayImpl");
		
		ABP_PlayerCharacter_C_TeleportWithDelayImpl_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.WithFade = WithFade;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWithFade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DelayTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::TeleportWithDelay(const struct FVector& Location, const struct FRotator& Rotation, bool bWithFade, float DelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelay");
		
		ABP_PlayerCharacter_C_TeleportWithDelay_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.bWithFade = bWithFade;
		params.DelayTime = DelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndDemoTeleport
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::EndDemoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndDemoTeleport");
		
		ABP_PlayerCharacter_C_EndDemoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFindByEnemyFirst
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::OnFindByEnemyFirst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFindByEnemyFirst");
		
		ABP_PlayerCharacter_C_OnFindByEnemyFirst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLossByEnemyLast
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::OnLossByEnemyLast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLossByEnemyLast");
		
		ABP_PlayerCharacter_C_OnLossByEnemyLast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerDeactivateGodMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerCharacter_C::OnPlayerDeactivateGodMode(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerDeactivateGodMode");
		
		ABP_PlayerCharacter_C_OnPlayerDeactivateGodMode_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_PlayerCharacter_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveDestroyed");
		
		ABP_PlayerCharacter_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter");
		
		ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
		return ptr;
	}

}


