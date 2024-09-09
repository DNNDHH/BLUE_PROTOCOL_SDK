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
	 * 		Name   -> Function TelopManager.TelopManager_C.OnReversePallet
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::OnReversePallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnReversePallet");
		
		UTelopManager_C_OnReversePallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermReversePallet
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermReversePallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermReversePallet");
		
		UTelopManager_C_TermReversePallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitReversePallet
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitReversePallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitReversePallet");
		
		UTelopManager_C_InitReversePallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnGetTelop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBTelopType                                       TelopType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBTelopBase* UTelopManager_C::OnGetTelop(ESBTelopType TelopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnGetTelop");
		
		UTelopManager_C_OnGetTelop_Params params {};
		params.TelopType = TelopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnProficiencyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnProficiencyUp(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnProficiencyUp");
		
		UTelopManager_C_OnProficiencyUp_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermProficiency
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermProficiency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermProficiency");
		
		UTelopManager_C_TermProficiency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitProficiency
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitProficiency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitProficiency");
		
		UTelopManager_C_InitProficiency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermSuspend
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermSuspend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermSuspend");
		
		UTelopManager_C_TermSuspend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitSuspend
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitSuspend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitSuspend");
		
		UTelopManager_C_InitSuspend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermDefenceBattleJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermDefenceBattleJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermDefenceBattleJingle");
		
		UTelopManager_C_TermDefenceBattleJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitDefenceBattleJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitDefenceBattleJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitDefenceBattleJingle");
		
		UTelopManager_C_InitDefenceBattleJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermTimeAttack
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermTimeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermTimeAttack");
		
		UTelopManager_C_TermTimeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitTimeAttack
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitTimeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitTimeAttack");
		
		UTelopManager_C_InitTimeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnLearningSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCharaSkillMasteryInfo>              NewSkill                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTelopManager_C::OnLearningSkill(TArray<struct FCharaSkillMasteryInfo>* NewSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnLearningSkill");
		
		UTelopManager_C_OnLearningSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSkill != nullptr)
			*NewSkill = params.NewSkill;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermLearningSkill
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermLearningSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermLearningSkill");
		
		UTelopManager_C_TermLearningSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitLearningSkill
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitLearningSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitLearningSkill");
		
		UTelopManager_C_InitLearningSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnTerminate
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::OnTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnTerminate");
		
		UTelopManager_C_OnTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnInitialize
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnInitialize");
		
		UTelopManager_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermInterruptQuest
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermInterruptQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermInterruptQuest");
		
		UTelopManager_C_TermInterruptQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitInterruptQuest
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitInterruptQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitInterruptQuest");
		
		UTelopManager_C_InitInterruptQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermRaidJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermRaidJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermRaidJingle");
		
		UTelopManager_C_TermRaidJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitRaidJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitRaidJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitRaidJingle");
		
		UTelopManager_C_InitRaidJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnClassLVUPJingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnClassLVUPJingle(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnClassLVUPJingle");
		
		UTelopManager_C_OnClassLVUPJingle_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermClassLvUpJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermClassLvUpJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermClassLvUpJingle");
		
		UTelopManager_C_TermClassLvUpJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitClassLvUpJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitClassLvUpJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitClassLvUpJingle");
		
		UTelopManager_C_InitClassLvUpJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnAdventureBoardJingleComplete
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::OnAdventureBoardJingleComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnAdventureBoardJingleComplete");
		
		UTelopManager_C_OnAdventureBoardJingleComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnAdventureBoardJingleClear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAdventureBoardClearStatus                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnAdventureBoardJingleClear(ESBAdventureBoardClearStatus Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnAdventureBoardJingleClear");
		
		UTelopManager_C_OnAdventureBoardJingleClear_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermAdventureBoardJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermAdventureBoardJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermAdventureBoardJingle");
		
		UTelopManager_C_TermAdventureBoardJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitAdventureBoardJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitAdventureBoardJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitAdventureBoardJingle");
		
		UTelopManager_C_InitAdventureBoardJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnQuestJingleCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnQuestJingleCancel(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnQuestJingleCancel");
		
		UTelopManager_C_OnQuestJingleCancel_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnQuestJingleComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnQuestJingleComplete(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnQuestJingleComplete");
		
		UTelopManager_C_OnQuestJingleComplete_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnQuestJingleUpdate2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTelopManager_C::OnQuestJingleUpdate2(TArray<int32_t> InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnQuestJingleUpdate2");
		
		UTelopManager_C_OnQuestJingleUpdate2_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnQuestJingleUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnQuestJingleUpdate(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnQuestJingleUpdate");
		
		UTelopManager_C_OnQuestJingleUpdate_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnQuestJingleAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnQuestJingleAccepted(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnQuestJingleAccepted");
		
		UTelopManager_C_OnQuestJingleAccepted_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.TermQuestJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::TermQuestJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.TermQuestJingle");
		
		UTelopManager_C_TermQuestJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.InitQuestJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::InitQuestJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.InitQuestJingle");
		
		UTelopManager_C_InitQuestJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.CustomEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::CustomEvent_5(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.CustomEvent_5");
		
		UTelopManager_C_CustomEvent_5_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindProficiencyUp
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindProficiencyUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindProficiencyUp");
		
		UTelopManager_C_BindProficiencyUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindProficiencyUp
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindProficiencyUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindProficiencyUp");
		
		UTelopManager_C_UnbindProficiencyUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.CustomEvent_2");
		
		UTelopManager_C_CustomEvent_2_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindSuspend
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindSuspend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindSuspend");
		
		UTelopManager_C_BindSuspend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindSuspend
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindSuspend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindSuspend");
		
		UTelopManager_C_UnbindSuspend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnSuspend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnSuspend(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnSuspend");
		
		UTelopManager_C_OnSuspend_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindOpenCommandMenu
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindOpenCommandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindOpenCommandMenu");
		
		UTelopManager_C_BindOpenCommandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindOpenCommandMenu
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindOpenCommandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindOpenCommandMenu");
		
		UTelopManager_C_UnbindOpenCommandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnOpenCommandMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnOpenCommandMenu(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnOpenCommandMenu");
		
		UTelopManager_C_OnOpenCommandMenu_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindCloseCommandMenu
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindCloseCommandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindCloseCommandMenu");
		
		UTelopManager_C_BindCloseCommandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindCloseCommandMenu
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindCloseCommandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindCloseCommandMenu");
		
		UTelopManager_C_UnbindCloseCommandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnCloseCommandMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnCloseCommandMenu(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnCloseCommandMenu");
		
		UTelopManager_C_OnCloseCommandMenu_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindDefenceBattleStart
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindDefenceBattleStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindDefenceBattleStart");
		
		UTelopManager_C_BindDefenceBattleStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindDefenceBattleStart
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindDefenceBattleStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindDefenceBattleStart");
		
		UTelopManager_C_UnbindDefenceBattleStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::CustomEvent_3(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.CustomEvent_3");
		
		UTelopManager_C_CustomEvent_3_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindTimeAttackBackToStartJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindTimeAttackBackToStartJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindTimeAttackBackToStartJingle");
		
		UTelopManager_C_BindTimeAttackBackToStartJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnBindTimeAttackBackToStartJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnBindTimeAttackBackToStartJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnBindTimeAttackBackToStartJingle");
		
		UTelopManager_C_UnBindTimeAttackBackToStartJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnTimeAttackBackToStartJingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnTimeAttackBackToStartJingle(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnTimeAttackBackToStartJingle");
		
		UTelopManager_C_OnTimeAttackBackToStartJingle_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindLearningSkill
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindLearningSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindLearningSkill");
		
		UTelopManager_C_BindLearningSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindLearningSkill
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindLearningSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindLearningSkill");
		
		UTelopManager_C_UnbindLearningSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnLearningSkillEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnLearningSkillEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnLearningSkillEvent");
		
		UTelopManager_C_OnLearningSkillEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindInterruptQuestJoin
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindInterruptQuestJoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindInterruptQuestJoin");
		
		UTelopManager_C_BindInterruptQuestJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindInterruptQuestSuccess
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindInterruptQuestSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindInterruptQuestSuccess");
		
		UTelopManager_C_BindInterruptQuestSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindInterruptQuestFailed
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindInterruptQuestFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindInterruptQuestFailed");
		
		UTelopManager_C_BindInterruptQuestFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindInterruptQuestJoin
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindInterruptQuestJoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindInterruptQuestJoin");
		
		UTelopManager_C_UnbindInterruptQuestJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindInterruptQuestSuccess
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindInterruptQuestSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindInterruptQuestSuccess");
		
		UTelopManager_C_UnbindInterruptQuestSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindInterruptQuestFailed
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindInterruptQuestFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindInterruptQuestFailed");
		
		UTelopManager_C_UnbindInterruptQuestFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnInterruptQuestJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnInterruptQuestJoin(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnInterruptQuestJoin");
		
		UTelopManager_C_OnInterruptQuestJoin_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnInterruptQuestSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnInterruptQuestSuccess(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnInterruptQuestSuccess");
		
		UTelopManager_C_OnInterruptQuestSuccess_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnInterruptQuestFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnInterruptQuestFailed(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnInterruptQuestFailed");
		
		UTelopManager_C_OnInterruptQuestFailed_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindRaidStart
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindRaidStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindRaidStart");
		
		UTelopManager_C_BindRaidStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindRaidStart
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindRaidStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindRaidStart");
		
		UTelopManager_C_UnbindRaidStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.CustomEvent_1");
		
		UTelopManager_C_CustomEvent_1_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindClassLvUpJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindClassLvUpJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindClassLvUpJingle");
		
		UTelopManager_C_BindClassLvUpJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindClassLvUpJingle
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindClassLvUpJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindClassLvUpJingle");
		
		UTelopManager_C_UnbindClassLvUpJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnClassLevelUpEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnClassLevelUpEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnClassLevelUpEvent");
		
		UTelopManager_C_OnClassLevelUpEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindAdventureBoardJingleClear
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindAdventureBoardJingleClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindAdventureBoardJingleClear");
		
		UTelopManager_C_BindAdventureBoardJingleClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindAdventureBoardJingleComplete
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindAdventureBoardJingleComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindAdventureBoardJingleComplete");
		
		UTelopManager_C_BindAdventureBoardJingleComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindAdventureBoardJingleClear
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindAdventureBoardJingleClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindAdventureBoardJingleClear");
		
		UTelopManager_C_UnbindAdventureBoardJingleClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindAdventureBoardJingleComplete
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindAdventureBoardJingleComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindAdventureBoardJingleComplete");
		
		UTelopManager_C_UnbindAdventureBoardJingleComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnAdventureBoardClear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnAdventureBoardClear(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnAdventureBoardClear");
		
		UTelopManager_C_OnAdventureBoardClear_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnAdventureBoardComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnAdventureBoardComplete(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnAdventureBoardComplete");
		
		UTelopManager_C_OnAdventureBoardComplete_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindQuestJingleAccept
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindQuestJingleAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindQuestJingleAccept");
		
		UTelopManager_C_BindQuestJingleAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindQuestJingleUpdate
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindQuestJingleUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindQuestJingleUpdate");
		
		UTelopManager_C_BindQuestJingleUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindQuestJingleClear
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindQuestJingleClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindQuestJingleClear");
		
		UTelopManager_C_BindQuestJingleClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindQuestJingleCancel
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindQuestJingleCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindQuestJingleCancel");
		
		UTelopManager_C_BindQuestJingleCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindReversePallet
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindReversePallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindReversePallet");
		
		UTelopManager_C_UnbindReversePallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindReversePallet
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindReversePallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindReversePallet");
		
		UTelopManager_C_BindReversePallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnReceiveAcceptedQuestEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnReceiveAcceptedQuestEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnReceiveAcceptedQuestEvent");
		
		UTelopManager_C_OnReceiveAcceptedQuestEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnReceiveUpdateQuestProgressEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnReceiveUpdateQuestProgressEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnReceiveUpdateQuestProgressEvent");
		
		UTelopManager_C_OnReceiveUpdateQuestProgressEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnReceiveCompleteQuestEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnReceiveCompleteQuestEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnReceiveCompleteQuestEvent");
		
		UTelopManager_C_OnReceiveCompleteQuestEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnReceiveCancelQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::OnReceiveCancelQuest(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnReceiveCancelQuest");
		
		UTelopManager_C_OnReceiveCancelQuest_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BindQuestJingleUpdate2
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BindQuestJingleUpdate2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BindQuestJingleUpdate2");
		
		UTelopManager_C_BindQuestJingleUpdate2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindQuestJingleUpdate2
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindQuestJingleUpdate2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindQuestJingleUpdate2");
		
		UTelopManager_C_UnbindQuestJingleUpdate2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.OnUpdatedQuestsJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    QuestIndexes                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTelopManager_C::OnUpdatedQuestsJoin(TArray<int32_t> QuestIndexes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.OnUpdatedQuestsJoin");
		
		UTelopManager_C_OnUpdatedQuestsJoin_Params params {};
		params.QuestIndexes = QuestIndexes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindQuestJingleAccept
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindQuestJingleAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindQuestJingleAccept");
		
		UTelopManager_C_UnbindQuestJingleAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindQuestJingleClear
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindQuestJingleClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindQuestJingleClear");
		
		UTelopManager_C_UnbindQuestJingleClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindQuestJingleUpdate
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindQuestJingleUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindQuestJingleUpdate");
		
		UTelopManager_C_UnbindQuestJingleUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.UnbindQuestJingleCancel
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::UnbindQuestJingleCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.UnbindQuestJingleCancel");
		
		UTelopManager_C_UnbindQuestJingleCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type1_K2Node_ComponentBoundEvent_3_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_Type1_K2Node_ComponentBoundEvent_3_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type1_K2Node_ComponentBoundEvent_3_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_Type1_K2Node_ComponentBoundEvent_3_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type2_K2Node_ComponentBoundEvent_4_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_Type2_K2Node_ComponentBoundEvent_4_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type2_K2Node_ComponentBoundEvent_4_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_Type2_K2Node_ComponentBoundEvent_4_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type3_K2Node_ComponentBoundEvent_6_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_Type3_K2Node_ComponentBoundEvent_6_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type3_K2Node_ComponentBoundEvent_6_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_Type3_K2Node_ComponentBoundEvent_6_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_GameOver_K2Node_ComponentBoundEvent_12_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_GameOver_K2Node_ComponentBoundEvent_12_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_GameOver_K2Node_ComponentBoundEvent_12_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_GameOver_K2Node_ComponentBoundEvent_12_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ClearDungeon_K2Node_ComponentBoundEvent_13_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_ClearDungeon_K2Node_ComponentBoundEvent_13_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ClearDungeon_K2Node_ComponentBoundEvent_13_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_ClearDungeon_K2Node_ComponentBoundEvent_13_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ArenaChallenge_K2Node_ComponentBoundEvent_14_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_ArenaChallenge_K2Node_ComponentBoundEvent_14_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ArenaChallenge_K2Node_ComponentBoundEvent_14_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_ArenaChallenge_K2Node_ComponentBoundEvent_14_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Mission_K2Node_ComponentBoundEvent_15_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_Mission_K2Node_ComponentBoundEvent_15_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Mission_K2Node_ComponentBoundEvent_15_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_Mission_K2Node_ComponentBoundEvent_15_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ReadyGo_K2Node_ComponentBoundEvent_16_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_ReadyGo_K2Node_ComponentBoundEvent_16_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ReadyGo_K2Node_ComponentBoundEvent_16_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_ReadyGo_K2Node_ComponentBoundEvent_16_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Normal_K2Node_ComponentBoundEvent_17_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_Normal_K2Node_ComponentBoundEvent_17_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Normal_K2Node_ComponentBoundEvent_17_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_Normal_K2Node_ComponentBoundEvent_17_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Proficiency_K2Node_ComponentBoundEvent_0_OnFinishDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTelopManager_C::BndEvt__TelopManager_Telop_Proficiency_K2Node_ComponentBoundEvent_0_OnFinishDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Proficiency_K2Node_ComponentBoundEvent_0_OnFinishDelegate__DelegateSignature");
		
		UTelopManager_C_BndEvt__TelopManager_Telop_Proficiency_K2Node_ComponentBoundEvent_0_OnFinishDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopManager.TelopManager_C.ExecuteUbergraph_TelopManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopManager_C::ExecuteUbergraph_TelopManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopManager.TelopManager_C.ExecuteUbergraph_TelopManager");
		
		UTelopManager_C_ExecuteUbergraph_TelopManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelopManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelopManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TelopManager.TelopManager_C");
		return ptr;
	}

}


