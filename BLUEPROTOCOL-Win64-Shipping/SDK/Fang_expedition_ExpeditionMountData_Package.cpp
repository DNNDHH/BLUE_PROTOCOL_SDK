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
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UpdateLotteryCountText
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::UpdateLotteryCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UpdateLotteryCountText");
		
		UFang_expedition_ExpeditionMountData_C_UpdateLotteryCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetPlusCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UpdateSkip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_ExpeditionMountData_C::SetPlusCount(int32_t Count, bool UpdateSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetPlusCount");
		
		UFang_expedition_ExpeditionMountData_C_SetPlusCount_Params params {};
		params.Count = Count;
		params.UpdateSkip = UpdateSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetMaxIconNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IconCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::SetMaxIconNum(int32_t IconCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetMaxIconNum");
		
		UFang_expedition_ExpeditionMountData_C_SetMaxIconNum_Params params {};
		params.IconCount = IconCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetUniqueIds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueIds                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_ExpeditionMountData_C::SetUniqueIds(TArray<class FString>* UniqueIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetUniqueIds");
		
		UFang_expedition_ExpeditionMountData_C_SetUniqueIds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueIds != nullptr)
			*UniqueIds = params.UniqueIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetExpectedValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::SetExpectedValue(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.SetExpectedValue");
		
		UFang_expedition_ExpeditionMountData_C_SetExpectedValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.RemoveIndex
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::RemoveIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.RemoveIndex");
		
		UFang_expedition_ExpeditionMountData_C_RemoveIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UnbindFunc
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::UnbindFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UnbindFunc");
		
		UFang_expedition_ExpeditionMountData_C_UnbindFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.BindFunc
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::BindFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.BindFunc");
		
		UFang_expedition_ExpeditionMountData_C_BindFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.UpdateIcon");
		
		UFang_expedition_ExpeditionMountData_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.AddUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::AddUniqueId(const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.AddUniqueId");
		
		UFang_expedition_ExpeditionMountData_C_AddUniqueId_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.ClearFangData
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::ClearFangData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.ClearFangData");
		
		UFang_expedition_ExpeditionMountData_C_ClearFangData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.Construct");
		
		UFang_expedition_ExpeditionMountData_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::OnClickIcon1(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon1");
		
		UFang_expedition_ExpeditionMountData_C_OnClickIcon1_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::OnClickIcon2(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon2");
		
		UFang_expedition_ExpeditionMountData_C_OnClickIcon2_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::OnClickIcon3(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon3");
		
		UFang_expedition_ExpeditionMountData_C_OnClickIcon3_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::OnClickIcon4(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon4");
		
		UFang_expedition_ExpeditionMountData_C_OnClickIcon4_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::OnClickIcon5(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickIcon5");
		
		UFang_expedition_ExpeditionMountData_C_OnClickIcon5_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.Destruct");
		
		UFang_expedition_ExpeditionMountData_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.ExecuteUbergraph_Fang_expedition_ExpeditionMountData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionMountData_C::ExecuteUbergraph_Fang_expedition_ExpeditionMountData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.ExecuteUbergraph_Fang_expedition_ExpeditionMountData");
		
		UFang_expedition_ExpeditionMountData_C_ExecuteUbergraph_Fang_expedition_ExpeditionMountData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickMountIcon__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionMountData_C::OnClickMountIcon__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C.OnClickMountIcon__DelegateSignature");
		
		UFang_expedition_ExpeditionMountData_C_OnClickMountIcon__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_ExpeditionMountData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_ExpeditionMountData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_ExpeditionMountData.Fang_expedition_ExpeditionMountData_C");
		return ptr;
	}

}


