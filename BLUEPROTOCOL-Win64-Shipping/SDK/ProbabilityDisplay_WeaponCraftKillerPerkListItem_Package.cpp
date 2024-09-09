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
	 * 		Name   -> Function ProbabilityDisplay_WeaponCraftKillerPerkListItem.ProbabilityDisplay_WeaponCraftKillerPerkListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            GreatNumBottom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GreatNumUpper                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SuccessNumBottom                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SuccessNumUpper                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDispPercentage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::Setup(const class FString& Name, int32_t GreatNumBottom, int32_t GreatNumUpper, int32_t SuccessNumBottom, int32_t SuccessNumUpper, float Rate, int32_t Index, bool IsDispPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_WeaponCraftKillerPerkListItem.ProbabilityDisplay_WeaponCraftKillerPerkListItem_C.Setup");
		
		UProbabilityDisplay_WeaponCraftKillerPerkListItem_C_Setup_Params params {};
		params.Name = Name;
		params.GreatNumBottom = GreatNumBottom;
		params.GreatNumUpper = GreatNumUpper;
		params.SuccessNumBottom = SuccessNumBottom;
		params.SuccessNumUpper = SuccessNumUpper;
		params.Rate = Rate;
		params.Index = Index;
		params.IsDispPercentage = IsDispPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_WeaponCraftKillerPerkListItem.ProbabilityDisplay_WeaponCraftKillerPerkListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_WeaponCraftKillerPerkListItem.ProbabilityDisplay_WeaponCraftKillerPerkListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem");
		
		UProbabilityDisplay_WeaponCraftKillerPerkListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_WeaponCraftKillerPerkListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponCraftKillerPerkListItem.ProbabilityDisplay_WeaponCraftKillerPerkListItem_C");
		return ptr;
	}

}


