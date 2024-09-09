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
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UCraftResultItem_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.PlayAnimIn");
		
		UCraftResultItem_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.Update SlackView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StorageNo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftResultItem_C::UpdateSlackView(int32_t StorageNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.Update SlackView");
		
		UCraftResultItem_C_UpdateSlackView_Params params {};
		params.StorageNo = StorageNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.Update Storage Slack Num
	 * 		Flags  -> ()
	 */
	void UCraftResultItem_C::UpdateStorageSlackNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.Update Storage Slack Num");
		
		UCraftResultItem_C_UpdateStorageSlackNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.UpdateBonusCraftNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CraftCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftResultItem_C::UpdateBonusCraftNum(int32_t CraftCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.UpdateBonusCraftNum");
		
		UCraftResultItem_C_UpdateBonusCraftNum_Params params {};
		params.CraftCount = CraftCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.UpdateCriticalColor
	 * 		Flags  -> ()
	 */
	void UCraftResultItem_C::UpdateCriticalColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.UpdateCriticalColor");
		
		UCraftResultItem_C_UpdateCriticalColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UCraftResultItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.Construct");
		
		UCraftResultItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.SetRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       Recepi                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCraftResultItem_C::SetRecepi(const struct FCharacterCraftRecepi& Recepi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.SetRecepi");
		
		UCraftResultItem_C_SetRecepi_Params params {};
		params.Recepi = Recepi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.SetCraftedItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCritical                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            totalCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleProfits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftResultItem_C::SetCraftedItemData(bool IsCritical, int32_t totalCount, int32_t StorageType, int32_t SaleNum, int32_t SaleProfits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.SetCraftedItemData");
		
		UCraftResultItem_C_SetCraftedItemData_Params params {};
		params.IsCritical = IsCritical;
		params.totalCount = totalCount;
		params.StorageType = StorageType;
		params.SaleNum = SaleNum;
		params.SaleProfits = SaleProfits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.SetCriticalCraftData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Uids                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CriticalNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CraftCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleProfits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftResultItem_C::SetCriticalCraftData(TArray<class FString> Uids, int32_t CriticalNum, int32_t TotalNum, int32_t CraftCount, int32_t StorageNum, int32_t SaleNum, int32_t SaleProfits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.SetCriticalCraftData");
		
		UCraftResultItem_C_SetCriticalCraftData_Params params {};
		params.Uids = Uids;
		params.CriticalNum = CriticalNum;
		params.TotalNum = TotalNum;
		params.CraftCount = CraftCount;
		params.StorageNum = StorageNum;
		params.SaleNum = SaleNum;
		params.SaleProfits = SaleProfits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.SetFailVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Flag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftResultItem_C::SetFailVisible(bool Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.SetFailVisible");
		
		UCraftResultItem_C_SetFailVisible_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultItem.CraftResultItem_C.ExecuteUbergraph_CraftResultItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftResultItem_C::ExecuteUbergraph_CraftResultItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultItem.CraftResultItem_C.ExecuteUbergraph_CraftResultItem");
		
		UCraftResultItem_C_ExecuteUbergraph_CraftResultItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftResultItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftResultItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftResultItem.CraftResultItem_C");
		return ptr;
	}

}


