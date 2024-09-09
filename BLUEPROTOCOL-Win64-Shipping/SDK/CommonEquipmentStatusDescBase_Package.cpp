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
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBGVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescBase_C::SetBGVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBGVisible");
		
		UCommonEquipmentStatusDescBase_C_SetBGVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ResetStackBIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEffectiveDisplay                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescBase_C::ResetStackBIcon(bool InIsEffectiveDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ResetStackBIcon");
		
		UCommonEquipmentStatusDescBase_C_ResetStackBIcon_Params params {};
		params.InIsEffectiveDisplay = InIsEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetStackBIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InIsEffectiveDisplay                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescBase_C::SetStackBIcon(const struct FOwnItemInfo& ItemInfo, bool InIsEffectiveDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetStackBIcon");
		
		UCommonEquipmentStatusDescBase_C_SetStackBIcon_Params params {};
		params.ItemInfo = ItemInfo;
		params.InIsEffectiveDisplay = InIsEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByCharaEquipType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  InCharaEquipType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescBase_C::SetInnerImagineEquipPositionByCharaEquipType(ESBCharaEquipType InCharaEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByCharaEquipType");
		
		UCommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType_Params params {};
		params.InCharaEquipType = InCharaEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InImagineMasterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentStatusDescBase_C::SetInnerImagineEquipPositionByMasterData(const struct FSBMasterImagine& InImagineMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByMasterData");
		
		UCommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData_Params params {};
		params.InImagineMasterData = InImagineMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescBase_C::SetInnerImagineEquipPositionVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionVisibility");
		
		UCommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBlank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescBase_C::SetBlank(bool InIsBlank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBlank");
		
		UCommonEquipmentStatusDescBase_C_SetBlank_Params params {};
		params.InIsBlank = InIsBlank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetEquipmentName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescBase_C::SetEquipmentName(const class FString& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetEquipmentName");
		
		UCommonEquipmentStatusDescBase_C_SetEquipmentName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SwitchBaseBgType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNormalType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescBase_C::SwitchBaseBgType(bool InIsNormalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SwitchBaseBgType");
		
		UCommonEquipmentStatusDescBase_C_SwitchBaseBgType_Params params {};
		params.InIsNormalType = InIsNormalType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBaseSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InHeight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescBase_C::SetBaseSize(float InWidth, float InHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBaseSize");
		
		UCommonEquipmentStatusDescBase_C_SetBaseSize_Params params {};
		params.InWidth = InWidth;
		params.InHeight = InHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentStatusDescBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.PreConstruct");
		
		UCommonEquipmentStatusDescBase_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentStatusDescBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.Construct");
		
		UCommonEquipmentStatusDescBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ExecuteUbergraph_CommonEquipmentStatusDescBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentStatusDescBase_C::ExecuteUbergraph_CommonEquipmentStatusDescBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ExecuteUbergraph_CommonEquipmentStatusDescBase");
		
		UCommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipmentStatusDescBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipmentStatusDescBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C");
		return ptr;
	}

}


