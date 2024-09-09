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
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.SetEquipmentIconVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillTree_SkillIconBase_C::SetEquipmentIconVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.SetEquipmentIconVisible");
		
		USkillTree_SkillIconBase_C_SetEquipmentIconVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.UpdateSimple
	 * 		Flags  -> ()
	 */
	void USkillTree_SkillIconBase_C::UpdateSimple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.UpdateSimple");
		
		USkillTree_SkillIconBase_C_UpdateSimple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Update
	 * 		Flags  -> ()
	 */
	void USkillTree_SkillIconBase_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Update");
		
		USkillTree_SkillIconBase_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPassive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconBase_C::Init(bool IsPassive, int32_t SkillId, int32_t SkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Init");
		
		USkillTree_SkillIconBase_C_Init_Params params {};
		params.IsPassive = IsPassive;
		params.SkillId = SkillId;
		params.SkillLevel = SkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Destruct
	 * 		Flags  -> ()
	 */
	void USkillTree_SkillIconBase_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Destruct");
		
		USkillTree_SkillIconBase_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.ExecuteUbergraph_SkillTree_SkillIconBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconBase_C::ExecuteUbergraph_SkillTree_SkillIconBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.ExecuteUbergraph_SkillTree_SkillIconBase");
		
		USkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconBase_C::OnUnhovered__DelegateSignature(int32_t SkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnUnhovered__DelegateSignature");
		
		USkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature_Params params {};
		params.SkillId = SkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconBase_C::OnHovered__DelegateSignature(int32_t SkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnHovered__DelegateSignature");
		
		USkillTree_SkillIconBase_C_OnHovered__DelegateSignature_Params params {};
		params.SkillId = SkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconBase_C::OnClicked__DelegateSignature(int32_t SkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnClicked__DelegateSignature");
		
		USkillTree_SkillIconBase_C_OnClicked__DelegateSignature_Params params {};
		params.SkillId = SkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTree_SkillIconBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTree_SkillIconBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillTree_SkillIconBase.SkillTree_SkillIconBase_C");
		return ptr;
	}

}


