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
	 * 		Name   -> Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMilitaryRecordData                         InMilitaryRecordData                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UMilitaryRecordListItem_C::SetData(const struct FMilitaryRecordData& InMilitaryRecordData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetData");
		
		UMilitaryRecordListItem_C_SetData_Params params {};
		params.InMilitaryRecordData = InMilitaryRecordData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetBaseImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBase                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMilitaryRecordListItem_C::SetBaseImage(bool InIsBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetBaseImage");
		
		UMilitaryRecordListItem_C_SetBaseImage_Params params {};
		params.InIsBase = InIsBase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MilitaryRecordListItem.MilitaryRecordListItem_C.ExecuteUbergraph_MilitaryRecordListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMilitaryRecordListItem_C::ExecuteUbergraph_MilitaryRecordListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilitaryRecordListItem.MilitaryRecordListItem_C.ExecuteUbergraph_MilitaryRecordListItem");
		
		UMilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMilitaryRecordListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMilitaryRecordListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MilitaryRecordListItem.MilitaryRecordListItem_C");
		return ptr;
	}

}


