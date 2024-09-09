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
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.GenerateSpecialSub
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBCharaEquipType                                  EquipPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Ability_C::GenerateSpecialSub(const struct FOwnItemInfo& OwnItemInfo, ESBCharaEquipType EquipPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.GenerateSpecialSub");
		
		UMyCharaMenu_Ability_C_GenerateSpecialSub_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		params.EquipPosition = EquipPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.GenerateSpecialMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                WeaponData1                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_Ability_C::GenerateSpecialMain(const struct FOwnItemInfo& WeaponData1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.GenerateSpecialMain");
		
		UMyCharaMenu_Ability_C_GenerateSpecialMain_Params params {};
		params.WeaponData1 = WeaponData1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Ability_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Construct");
		
		UMyCharaMenu_Ability_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Collect Unique Ids
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Ability_C::CollectUniqueIds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Collect Unique Ids");
		
		UMyCharaMenu_Ability_C_CollectUniqueIds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Passive Skill
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Ability_C::GeneratePassiveSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Passive Skill");
		
		UMyCharaMenu_Ability_C_GeneratePassiveSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Weapons
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Ability_C::GenerateWeapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Weapons");
		
		UMyCharaMenu_Ability_C_GenerateWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Imagines
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Ability_C::GenerateImagines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Imagines");
		
		UMyCharaMenu_Ability_C_GenerateImagines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Base Skill
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Ability_C::GenerateBaseSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Base Skill");
		
		UMyCharaMenu_Ability_C_GenerateBaseSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.ExecuteUbergraph_MyCharaMenu_Ability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Ability_C::ExecuteUbergraph_MyCharaMenu_Ability(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.ExecuteUbergraph_MyCharaMenu_Ability");
		
		UMyCharaMenu_Ability_C_ExecuteUbergraph_MyCharaMenu_Ability_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_Ability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_Ability_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_Ability.MyCharaMenu_Ability_C");
		return ptr;
	}

}


