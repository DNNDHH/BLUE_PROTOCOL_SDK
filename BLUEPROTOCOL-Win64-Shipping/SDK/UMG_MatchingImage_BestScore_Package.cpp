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
	 * 		Name   -> Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.Pre Init Time Score Tower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingImage_BestScore_C::PreInitTimeScoreTower(const class FString& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.Pre Init Time Score Tower");
		
		UUMG_MatchingImage_BestScore_C_PreInitTimeScoreTower_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BestScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        GameContentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingImage_BestScore_C::SetRank(int32_t BestScore, ESBClassType ClassType, const class FName& GameContentId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetRank");
		
		UUMG_MatchingImage_BestScore_C_SetRank_Params params {};
		params.BestScore = BestScore;
		params.ClassType = ClassType;
		params.GameContentId = GameContentId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetTower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FloorBest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FloorMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClearNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingImage_BestScore_C::SetTower(int32_t FloorBest, int32_t FloorMax, int32_t ClearNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetTower");
		
		UUMG_MatchingImage_BestScore_C_SetTower_Params params {};
		params.FloorBest = FloorBest;
		params.FloorMax = FloorMax;
		params.ClearNum = ClearNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Cleared                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingImage_BestScore_C::SetScore(int32_t Score, bool Cleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetScore");
		
		UUMG_MatchingImage_BestScore_C_SetScore_Params params {};
		params.Score = Score;
		params.Cleared = Cleared;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Cleared                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingImage_BestScore_C::SetTime(int32_t Time, bool Cleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetTime");
		
		UUMG_MatchingImage_BestScore_C_SetTime_Params params {};
		params.Time = Time;
		params.Cleared = Cleared;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetBestScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BestScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClearNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        GameContentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingImage_BestScore_C::SetBestScore(int32_t BestScore, int32_t ClearNum, const class FName& GameContentId, ESBClassType ClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetBestScore");
		
		UUMG_MatchingImage_BestScore_C_SetBestScore_Params params {};
		params.BestScore = BestScore;
		params.ClearNum = ClearNum;
		params.GameContentId = GameContentId;
		params.ClassType = ClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingImage_BestScore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingImage_BestScore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C");
		return ptr;
	}

}


