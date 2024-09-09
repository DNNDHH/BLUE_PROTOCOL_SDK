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
	 * 		Name   -> Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetUnknownData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LevelMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LevelMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Rare                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_DropItem_C::SetUnknownData(int32_t LevelMin, int32_t LevelMax, bool Rare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetUnknownData");
		
		ULibraryMenu_Monster_DropItem_C_SetUnknownData_Params params {};
		params.LevelMin = LevelMin;
		params.LevelMax = LevelMax;
		params.Rare = Rare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetDataLottery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LevelMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LevelMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Rare                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_DropItem_C::SetDataLottery(ESBRewardItemType RewardType, int32_t ItemId, int32_t LevelMin, int32_t LevelMax, bool Rare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetDataLottery");
		
		ULibraryMenu_Monster_DropItem_C_SetDataLottery_Params params {};
		params.RewardType = RewardType;
		params.ItemId = ItemId;
		params.LevelMin = LevelMin;
		params.LevelMax = LevelMax;
		params.Rare = Rare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.DropMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OpenCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NowCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_DropItem_C::DropMask(int32_t OpenCount, int32_t NowCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.DropMask");
		
		ULibraryMenu_Monster_DropItem_C_DropMask_Params params {};
		params.OpenCount = OpenCount;
		params.NowCount = NowCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LevelMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LevelMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NewIconVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Rare                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Monster_DropItem_C::SetData(EItemType ItemType, int32_t ItemId, int32_t LevelMin, int32_t LevelMax, bool NewIconVisible, bool Rare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetData");
		
		ULibraryMenu_Monster_DropItem_C_SetData_Params params {};
		params.ItemType = ItemType;
		params.ItemId = ItemId;
		params.LevelMin = LevelMin;
		params.LevelMax = LevelMax;
		params.NewIconVisible = NewIconVisible;
		params.Rare = Rare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Monster_DropItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Monster_DropItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C");
		return ptr;
	}

}


