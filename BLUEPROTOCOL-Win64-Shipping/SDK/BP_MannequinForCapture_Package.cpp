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
	 * 		Name   -> Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateAnimChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCostumeItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutAnimChange                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_C::UpdateAnimChange(int32_t InCostumeItemId, bool* OutAnimChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateAnimChange");
		
		ABP_MannequinForCapture_C_UpdateAnimChange_Params params {};
		params.InCostumeItemId = InCostumeItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnimChange != nullptr)
			*OutAnimChange = params.OutAnimChange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture.BP_MannequinForCapture_C.ResetMannequin
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_C::ResetMannequin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture.BP_MannequinForCapture_C.ResetMannequin");
		
		ABP_MannequinForCapture_C_ResetMannequin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateMannequin
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_C::UpdateMannequin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateMannequin");
		
		ABP_MannequinForCapture_C_UpdateMannequin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture.BP_MannequinForCapture_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture.BP_MannequinForCapture_C.ReceiveBeginPlay");
		
		ABP_MannequinForCapture_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetCostumeToMannequin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCostumeItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOwnItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InOwnCostumeColorIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOwnCostumeColorS                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOwnCostumeColorV                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOwnCostumeMaterialId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_C::SetCostumeToMannequin(int32_t InCostumeItemId, bool IsOwnItem, int32_t InOwnCostumeColorIndex, int32_t InOwnCostumeColorS, int32_t InOwnCostumeColorV, int32_t InOwnCostumeMaterialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetCostumeToMannequin");
		
		ABP_MannequinForCapture_C_SetCostumeToMannequin_Params params {};
		params.InCostumeItemId = InCostumeItemId;
		params.IsOwnItem = IsOwnItem;
		params.InOwnCostumeColorIndex = InOwnCostumeColorIndex;
		params.InOwnCostumeColorS = InOwnCostumeColorS;
		params.InOwnCostumeColorV = InOwnCostumeColorV;
		params.InOwnCostumeMaterialId = InOwnCostumeMaterialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetMannequinType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMale                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_C::SetMannequinType(bool IsMale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetMannequinType");
		
		ABP_MannequinForCapture_C_SetMannequinType_Params params {};
		params.IsMale = IsMale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture.BP_MannequinForCapture_C.ExecuteUbergraph_BP_MannequinForCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_C::ExecuteUbergraph_BP_MannequinForCapture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture.BP_MannequinForCapture_C.ExecuteUbergraph_BP_MannequinForCapture");
		
		ABP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MannequinForCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MannequinForCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MannequinForCapture.BP_MannequinForCapture_C");
		return ptr;
	}

}


