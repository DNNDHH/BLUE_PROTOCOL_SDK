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
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.SetChildBoxWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineTypeView_C::SetChildBoxWidth(float Width)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.SetChildBoxWidth");
		
		UImagineTypeView_C_SetChildBoxWidth_Params params {};
		params.Width = Width;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.SetBoxWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineTypeView_C::SetBoxWidth(float Width)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.SetBoxWidth");
		
		UImagineTypeView_C_SetBoxWidth_Params params {};
		params.Width = Width;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.Setinterval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            SBMasterImagine                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StackBNum                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineTypeView_C::Setinterval(const struct FSBMasterImagine& SBMasterImagine, int32_t StackBNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.Setinterval");
		
		UImagineTypeView_C_Setinterval_Params params {};
		params.SBMasterImagine = SBMasterImagine;
		params.StackBNum = StackBNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParamByMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      StackBText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UImagineTypeView_C::ApplyBattleImagineStackParamByMaster(const struct FSBMasterImagine& ImagineMaster, const class FString& StackBText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParamByMaster");
		
		UImagineTypeView_C_ApplyBattleImagineStackParamByMaster_Params params {};
		params.ImagineMaster = ImagineMaster;
		params.StackBText = StackBText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineDataByMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineTypeView_C::ApplyBattleImagineDataByMaster(const struct FSBMasterImagine& ImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineDataByMaster");
		
		UImagineTypeView_C_ApplyBattleImagineDataByMaster_Params params {};
		params.ImagineMaster = ImagineMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.InitUIStackBMaxMode
	 * 		Flags  -> ()
	 */
	void UImagineTypeView_C::InitUIStackBMaxMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.InitUIStackBMaxMode");
		
		UImagineTypeView_C_InitUIStackBMaxMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyDataMaxStackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineTypeView_C::ApplyDataMaxStackB(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyDataMaxStackB");
		
		UImagineTypeView_C_ApplyDataMaxStackB_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.Set Diff Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineTypeView_C::SetDiffShow(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.Set Diff Show");
		
		UImagineTypeView_C_SetDiffShow_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      StackBText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineTypeView_C::ApplyBattleImagineStackParam(const struct FSBMasterImagine& ImagineMaster, const class FString& StackBText, const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParam");
		
		UImagineTypeView_C_ApplyBattleImagineStackParam_Params params {};
		params.ImagineMaster = ImagineMaster;
		params.StackBText = StackBText;
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UImagineTypeView_C::ApplyBattleImagineData(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineData");
		
		UImagineTypeView_C_ApplyBattleImagineData_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineTypeView_C::ApplyData(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyData");
		
		UImagineTypeView_C_ApplyData_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.Set Development View
	 * 		Flags  -> ()
	 */
	void UImagineTypeView_C::SetDevelopmentView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.Set Development View");
		
		UImagineTypeView_C_SetDevelopmentView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyImagineParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StackBNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineTypeView_C::ApplyImagineParam(const struct FSBMasterImagine& ImagineMaster, int32_t Level, int32_t StackBNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyImagineParam");
		
		UImagineTypeView_C_ApplyImagineParam_Params params {};
		params.ImagineMaster = ImagineMaster;
		params.Level = Level;
		params.StackBNum = StackBNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyInnerImagineParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineTypeView_C::ApplyInnerImagineParam(const struct FSBMasterImagine& MasterData, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyInnerImagineParam");
		
		UImagineTypeView_C_ApplyInnerImagineParam_Params params {};
		params.MasterData = MasterData;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.SetEquipPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            ImagineData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineTypeView_C::SetEquipPosition(const struct FSBMasterImagine& ImagineData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.SetEquipPosition");
		
		UImagineTypeView_C_SetEquipPosition_Params params {};
		params.ImagineData = ImagineData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            ImagineMaster                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineTypeView_C::ApplyBattleImagineParam(const struct FSBMasterImagine& ImagineMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineParam");
		
		UImagineTypeView_C_ApplyBattleImagineParam_Params params {};
		params.ImagineMaster = ImagineMaster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineTypeView_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.PreConstruct");
		
		UImagineTypeView_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineTypeView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.Construct");
		
		UImagineTypeView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.Set Enable Flat Style
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableFlatStyle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineTypeView_C::SetEnableFlatStyle(bool bEnableFlatStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.Set Enable Flat Style");
		
		UImagineTypeView_C_SetEnableFlatStyle_Params params {};
		params.bEnableFlatStyle = bEnableFlatStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineTypeView.ImagineTypeView_C.ExecuteUbergraph_ImagineTypeView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineTypeView_C::ExecuteUbergraph_ImagineTypeView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineTypeView.ImagineTypeView_C.ExecuteUbergraph_ImagineTypeView");
		
		UImagineTypeView_C_ExecuteUbergraph_ImagineTypeView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineTypeView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineTypeView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineTypeView.ImagineTypeView_C");
		return ptr;
	}

}


