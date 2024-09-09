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
	 * 		Name   -> Function FishingPlate.FishingPlate_C.Set Big Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBig                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingPlate_C::SetBigSmall(bool IsBig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingPlate.FishingPlate_C.Set Big Small");
		
		UFishingPlate_C_SetBigSmall_Params params {};
		params.IsBig = IsBig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingPlate.FishingPlate_C.Stab_GetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueIsBig                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingPlate_C::Stab_GetSize(bool* TrueIsBig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingPlate.FishingPlate_C.Stab_GetSize");
		
		UFishingPlate_C_Stab_GetSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrueIsBig != nullptr)
			*TrueIsBig = params.TrueIsBig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingPlate.FishingPlate_C.SwitchItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueIsItemBox                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishingPlate_C::SwitchItemBox(bool TrueIsItemBox, int32_t ItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingPlate.FishingPlate_C.SwitchItemBox");
		
		UFishingPlate_C_SwitchItemBox_Params params {};
		params.TrueIsItemBox = TrueIsItemBox;
		params.ItemAmount = ItemAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingPlate.FishingPlate_C.IsItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               TrueIsItemBox                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingPlate_C::IsItemBox(const class FString& Name, bool* TrueIsItemBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingPlate.FishingPlate_C.IsItemBox");
		
		UFishingPlate_C_IsItemBox_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrueIsItemBox != nullptr)
			*TrueIsItemBox = params.TrueIsItemBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingPlate.FishingPlate_C.SetFishPlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Description                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewRecord                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBig                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingPlate_C::SetFishPlate(const class FString& Name, const class FString& Description, float Length, float Weight, bool Show, int32_t ItemAmount, bool New, bool NewRecord, bool IsBig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingPlate.FishingPlate_C.SetFishPlate");
		
		UFishingPlate_C_SetFishPlate_Params params {};
		params.Name = Name;
		params.Description = Description;
		params.Length = Length;
		params.Weight = Weight;
		params.Show = Show;
		params.ItemAmount = ItemAmount;
		params.New = New;
		params.NewRecord = NewRecord;
		params.IsBig = IsBig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingPlate.FishingPlate_C.Construct
	 * 		Flags  -> ()
	 */
	void UFishingPlate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingPlate.FishingPlate_C.Construct");
		
		UFishingPlate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingPlate.FishingPlate_C.ExecuteUbergraph_FishingPlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishingPlate_C::ExecuteUbergraph_FishingPlate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingPlate.FishingPlate_C.ExecuteUbergraph_FishingPlate");
		
		UFishingPlate_C_ExecuteUbergraph_FishingPlate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingPlate.FishingPlate_C.StartResultPlateAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFishingPlate_C::StartResultPlateAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingPlate.FishingPlate_C.StartResultPlateAnim__DelegateSignature");
		
		UFishingPlate_C_StartResultPlateAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFishingPlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFishingPlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FishingPlate.FishingPlate_C");
		return ptr;
	}

}


