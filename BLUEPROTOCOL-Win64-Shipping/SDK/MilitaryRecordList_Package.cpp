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
	 * 		Name   -> Function MilitaryRecordList.MilitaryRecordList_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMilitaryRecordData>                 InMilitaryRecordData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InIsMilitalyRecordOpen                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMilitaryRecordList_C::SetData(TArray<struct FMilitaryRecordData> InMilitaryRecordData, bool InIsMilitalyRecordOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilitaryRecordList.MilitaryRecordList_C.SetData");
		
		UMilitaryRecordList_C_SetData_Params params {};
		params.InMilitaryRecordData = InMilitaryRecordData;
		params.InIsMilitalyRecordOpen = InIsMilitalyRecordOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MilitaryRecordList.MilitaryRecordList_C.ExecuteUbergraph_MilitaryRecordList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMilitaryRecordList_C::ExecuteUbergraph_MilitaryRecordList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MilitaryRecordList.MilitaryRecordList_C.ExecuteUbergraph_MilitaryRecordList");
		
		UMilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMilitaryRecordList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMilitaryRecordList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MilitaryRecordList.MilitaryRecordList_C");
		return ptr;
	}

}


