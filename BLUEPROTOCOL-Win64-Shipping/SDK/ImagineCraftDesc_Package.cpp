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
	 * 		Name   -> Function ImagineCraftDesc.ImagineCraftDesc_C.UpdateSkills
	 * 		Flags  -> ()
	 */
	void UImagineCraftDesc_C::UpdateSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDesc.ImagineCraftDesc_C.UpdateSkills");
		
		UImagineCraftDesc_C_UpdateSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDesc.ImagineCraftDesc_C.IsStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CurrentIsStorage                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraftDesc_C::IsStorage(bool* CurrentIsStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDesc.ImagineCraftDesc_C.IsStorage");
		
		UImagineCraftDesc_C_IsStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentIsStorage != nullptr)
			*CurrentIsStorage = params.CurrentIsStorage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDesc.ImagineCraftDesc_C.GetStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StorageNo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftDesc_C::GetStorage(int32_t* StorageNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDesc.ImagineCraftDesc_C.GetStorage");
		
		UImagineCraftDesc_C_GetStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StorageNo != nullptr)
			*StorageNo = params.StorageNo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDesc.ImagineCraftDesc_C.PerkListGenerate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InImagineMaster                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UImagineCraftDesc_C::PerkListGenerate(const struct FSBMasterImagine& InImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDesc.ImagineCraftDesc_C.PerkListGenerate");
		
		UImagineCraftDesc_C_PerkListGenerate_Params params {};
		params.InImagineMaster = InImagineMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDesc.ImagineCraftDesc_C.CalclateMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Money                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isLiquidMemomryActive                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDiscount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraftDesc_C::CalclateMoney(int32_t* Money, bool* isLiquidMemomryActive, bool* IsDiscount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDesc.ImagineCraftDesc_C.CalclateMoney");
		
		UImagineCraftDesc_C_CalclateMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Money != nullptr)
			*Money = params.Money;
		if (isLiquidMemomryActive != nullptr)
			*isLiquidMemomryActive = params.isLiquidMemomryActive;
		if (IsDiscount != nullptr)
			*IsDiscount = params.IsDiscount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDesc.ImagineCraftDesc_C.GenerateMaterialData
	 * 		Flags  -> ()
	 */
	void UImagineCraftDesc_C::GenerateMaterialData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDesc.ImagineCraftDesc_C.GenerateMaterialData");
		
		UImagineCraftDesc_C_GenerateMaterialData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDesc.ImagineCraftDesc_C.SetRecepiData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImagineRecepi                        RecepiData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineCraftDesc_C::SetRecepiData(const struct FMasterImagineRecepi& RecepiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDesc.ImagineCraftDesc_C.SetRecepiData");
		
		UImagineCraftDesc_C_SetRecepiData_Params params {};
		params.RecepiData = RecepiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftDesc.ImagineCraftDesc_C.ExecuteUbergraph_ImagineCraftDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftDesc_C::ExecuteUbergraph_ImagineCraftDesc(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftDesc.ImagineCraftDesc_C.ExecuteUbergraph_ImagineCraftDesc");
		
		UImagineCraftDesc_C_ExecuteUbergraph_ImagineCraftDesc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineCraftDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineCraftDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineCraftDesc.ImagineCraftDesc_C");
		return ptr;
	}

}


