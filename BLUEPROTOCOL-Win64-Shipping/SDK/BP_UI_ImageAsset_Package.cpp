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
	 * 		Name   -> Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset_Dungeon_ById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_ImageAsset_C::GetUIImageAsset_Dungeon_ById(const class FName& DungeonId, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset_Dungeon_ById");
		
		UBP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById_Params params {};
		params.DungeonId = DungeonId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset_Dungeon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ImageName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_ImageAsset_C::GetUIImageAsset_Dungeon(const class FName& ImageName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset_Dungeon");
		
		UBP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_Params params {};
		params.ImageName = ImageName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ImageName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Exist                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UI_ImageAsset_C::GetUIImageAsset(class UDataTable* DataTable, const class FName& ImageName, class UObject* __WorldContext, bool* Exist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset");
		
		UBP_UI_ImageAsset_C_GetUIImageAsset_Params params {};
		params.DataTable = DataTable;
		params.ImageName = ImageName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exist != nullptr)
			*Exist = params.Exist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UI_ImageAsset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UI_ImageAsset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_ImageAsset.BP_UI_ImageAsset_C");
		return ptr;
	}

}


