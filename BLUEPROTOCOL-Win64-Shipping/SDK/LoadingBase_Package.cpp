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
	 * 		Name   -> Function LoadingBase.LoadingBase_C.AddLoadingTipsCandidateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InListIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingBase_C::AddLoadingTipsCandidateList(int32_t InListIndex, int32_t InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.AddLoadingTipsCandidateList");
		
		ULoadingBase_C_AddLoadingTipsCandidateList_Params params {};
		params.InListIndex = InListIndex;
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.UpdateCandidateTipsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            totalCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingBase_C::UpdateCandidateTipsList(int32_t* totalCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.UpdateCandidateTipsList");
		
		ULoadingBase_C_UpdateCandidateTipsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (totalCount != nullptr)
			*totalCount = params.totalCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.SetTipsText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TipsId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingBase_C::SetTipsText(int32_t TipsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.SetTipsText");
		
		ULoadingBase_C_SetTipsText_Params params {};
		params.TipsId = TipsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.CheckProgressMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadingBase_C::CheckProgressMission(const class FName& MissionId, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.CheckProgressMission");
		
		ULoadingBase_C_CheckProgressMission_Params params {};
		params.MissionId = MissionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.CheckProgressQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProgressType                                      ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ProgressQuestId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ProgressStep                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadingBase_C::CheckProgressQuest(EProgressType ProgressType, const class FName& ProgressQuestId, int32_t ProgressStep, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.CheckProgressQuest");
		
		ULoadingBase_C_CheckProgressQuest_Params params {};
		params.ProgressType = ProgressType;
		params.ProgressQuestId = ProgressQuestId;
		params.ProgressStep = ProgressStep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.CheckMapId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MapCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadingBase_C::CheckMapId(const class FName& MapCategory, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.CheckMapId");
		
		ULoadingBase_C_CheckMapId_Params params {};
		params.MapCategory = MapCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.UpdateAspectRate
	 * 		Flags  -> ()
	 */
	void ULoadingBase_C::UpdateAspectRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.UpdateAspectRate");
		
		ULoadingBase_C_UpdateAspectRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.SetUpRule
	 * 		Flags  -> ()
	 */
	void ULoadingBase_C::SetUpRule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.SetUpRule");
		
		ULoadingBase_C_SetUpRule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.Construct
	 * 		Flags  -> ()
	 */
	void ULoadingBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.Construct");
		
		ULoadingBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.Tick");
		
		ULoadingBase_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.Show
	 * 		Flags  -> ()
	 */
	void ULoadingBase_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.Show");
		
		ULoadingBase_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.ChangeTips
	 * 		Flags  -> ()
	 */
	void ULoadingBase_C::ChangeTips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.ChangeTips");
		
		ULoadingBase_C_ChangeTips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.CheckLogOutput
	 * 		Flags  -> ()
	 */
	void ULoadingBase_C::CheckLogOutput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.CheckLogOutput");
		
		ULoadingBase_C_CheckLogOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingBase.LoadingBase_C.ExecuteUbergraph_LoadingBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingBase_C::ExecuteUbergraph_LoadingBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingBase.LoadingBase_C.ExecuteUbergraph_LoadingBase");
		
		ULoadingBase_C_ExecuteUbergraph_LoadingBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadingBase.LoadingBase_C");
		return ptr;
	}

}


