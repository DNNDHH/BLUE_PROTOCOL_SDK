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
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.GetSubAbilityInfoCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEffectValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPickId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMasterImaginePerkPickTable                 InImaginePerkPick                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBStatusAilmentIconType                           InIconType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExist                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Min                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftListItem_C::GetSubAbilityInfoCraft(int32_t InEffectValue, int32_t InPickId, const struct FMasterImaginePerkPickTable& InImaginePerkPick, ESBStatusAilmentIconType InIconType, bool* bIsExist, int32_t* Min, int32_t* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.GetSubAbilityInfoCraft");
		
		UProbabilityDisplay_ImagineCraftListItem_C_GetSubAbilityInfoCraft_Params params {};
		params.InEffectValue = InEffectValue;
		params.InPickId = InPickId;
		params.InImaginePerkPick = InImaginePerkPick;
		params.InIconType = InIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsExist != nullptr)
			*bIsExist = params.bIsExist;
		if (Min != nullptr)
			*Min = params.Min;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.GetMainAbilityInfoCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEffectValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPickId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMasterImaginePerkPickTable                 InImaginePerkPick                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBStatusAilmentIconType                           InIconType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExist                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Min                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftListItem_C::GetMainAbilityInfoCraft(int32_t InEffectValue, int32_t InPickId, const struct FMasterImaginePerkPickTable& InImaginePerkPick, ESBStatusAilmentIconType InIconType, bool* bIsExist, int32_t* Min, int32_t* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.GetMainAbilityInfoCraft");
		
		UProbabilityDisplay_ImagineCraftListItem_C_GetMainAbilityInfoCraft_Params params {};
		params.InEffectValue = InEffectValue;
		params.InPickId = InPickId;
		params.InImaginePerkPick = InImaginePerkPick;
		params.InIconType = InIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsExist != nullptr)
			*bIsExist = params.bIsExist;
		if (Min != nullptr)
			*Min = params.Min;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.GetSubAbilityInfoAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEffectValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPickId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMasterImaginePerkPickTable                 InImaginePerkPick                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBStatusAilmentIconType                           InIconType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExist                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Min                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftListItem_C::GetSubAbilityInfoAll(int32_t InEffectValue, int32_t InPickId, const struct FMasterImaginePerkPickTable& InImaginePerkPick, ESBStatusAilmentIconType InIconType, bool* bIsExist, int32_t* Min, int32_t* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.GetSubAbilityInfoAll");
		
		UProbabilityDisplay_ImagineCraftListItem_C_GetSubAbilityInfoAll_Params params {};
		params.InEffectValue = InEffectValue;
		params.InPickId = InPickId;
		params.InImaginePerkPick = InImaginePerkPick;
		params.InIconType = InIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsExist != nullptr)
			*bIsExist = params.bIsExist;
		if (Min != nullptr)
			*Min = params.Min;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.GetMainAbilityInfoAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEffectValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPickId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMasterImaginePerkPickTable                 InImaginePerkPick                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBStatusAilmentIconType                           InIconType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExist                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Min                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftListItem_C::GetMainAbilityInfoAll(int32_t InEffectValue, int32_t InPickId, const struct FMasterImaginePerkPickTable& InImaginePerkPick, ESBStatusAilmentIconType InIconType, bool* bIsExist, int32_t* Min, int32_t* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.GetMainAbilityInfoAll");
		
		UProbabilityDisplay_ImagineCraftListItem_C_GetMainAbilityInfoAll_Params params {};
		params.InEffectValue = InEffectValue;
		params.InPickId = InPickId;
		params.InImaginePerkPick = InImaginePerkPick;
		params.InIconType = InIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsExist != nullptr)
			*bIsExist = params.bIsExist;
		if (Min != nullptr)
			*Min = params.Min;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.SetupDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PickId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InPerkPickId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftListItem_C::SetupDrop(int32_t PickId, float Rate, int32_t Index, const class FName& InPerkPickId, int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.SetupDrop");
		
		UProbabilityDisplay_ImagineCraftListItem_C_SetupDrop_Params params {};
		params.PickId = PickId;
		params.Rate = Rate;
		params.Index = Index;
		params.InPerkPickId = InPerkPickId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PickId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMasterImaginePerkPickTable                 ImaginePerkPick                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftListItem_C::Setup(int32_t PickId, float Rate, int32_t Index, const struct FMasterImaginePerkPickTable& ImaginePerkPick, int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.Setup");
		
		UProbabilityDisplay_ImagineCraftListItem_C_Setup_Params params {};
		params.PickId = PickId;
		params.Rate = Rate;
		params.Index = Index;
		params.ImaginePerkPick = ImaginePerkPick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.SetupA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftListItem_C::SetupA(int32_t PerkId, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.SetupA");
		
		UProbabilityDisplay_ImagineCraftListItem_C_SetupA_Params params {};
		params.PerkId = PerkId;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftListItem_C::ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem");
		
		UProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_ImagineCraftListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_ImagineCraftListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C");
		return ptr;
	}

}


