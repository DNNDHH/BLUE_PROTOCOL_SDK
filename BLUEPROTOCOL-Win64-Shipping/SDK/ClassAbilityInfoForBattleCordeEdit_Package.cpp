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
	 * 		Name   -> Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InClassAbilitySkillIds                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InSetupByCurrEquip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassAbilityInfoForBattleCordeEdit_C::Setup(TArray<int32_t>* InClassAbilitySkillIds, bool InSetupByCurrEquip, ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Setup");
		
		UClassAbilityInfoForBattleCordeEdit_C_Setup_Params params {};
		params.InSetupByCurrEquip = InSetupByCurrEquip;
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InClassAbilitySkillIds != nullptr)
			*InClassAbilitySkillIds = params.InClassAbilitySkillIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Dest
	 * 		Flags  -> ()
	 */
	void UClassAbilityInfoForBattleCordeEdit_C::Dest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Dest");
		
		UClassAbilityInfoForBattleCordeEdit_C_Dest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Const
	 * 		Flags  -> ()
	 */
	void UClassAbilityInfoForBattleCordeEdit_C::Const()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Const");
		
		UClassAbilityInfoForBattleCordeEdit_C_Const_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClassAbilityInfoForBattleCordeEdit_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.PreConstruct");
		
		UClassAbilityInfoForBattleCordeEdit_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Destruct
	 * 		Flags  -> ()
	 */
	void UClassAbilityInfoForBattleCordeEdit_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Destruct");
		
		UClassAbilityInfoForBattleCordeEdit_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassAbilityInfoForBattleCordeEdit_C::ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit");
		
		UClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.OnClassAbilityIconClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillSlotId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassAbilityInfoForBattleCordeEdit_C::OnClassAbilityIconClicked__DelegateSignature(int32_t InSkillSlotId, int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.OnClassAbilityIconClicked__DelegateSignature");
		
		UClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature_Params params {};
		params.InSkillSlotId = InSkillSlotId;
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClassAbilityInfoForBattleCordeEdit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClassAbilityInfoForBattleCordeEdit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C");
		return ptr;
	}

}


