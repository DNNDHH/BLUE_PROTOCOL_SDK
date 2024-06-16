#pragma once

 

// Package: PerformanceCheckParam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct PerformanceCheckParam.PerformanceCheckParam
// 0x0030 (0x0030 - 0x0000)
struct FPerformanceCheckParam final
{
public:
	class FString                                 Map_21_6E815A7445D7A6E48842418A6C261310;           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         FallHeight_12_D742FDEC407C7C2715040499C606AD2B;    // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SplitNum_13_DA2E18694DDC0C21B4527B8B46B53004;      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Distance_14_8429F2314414A0C6A86391B3B9485C7E;      // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FallWaitTime_15_CFBE50BE46BF4E03DD0797AF6E10B3CA;  // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Center_18_6618654A4F67AB4D02E60AB3DADE26A4;        // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FPerformanceCheckParam) == 0x000008, "Wrong alignment on FPerformanceCheckParam");
static_assert(sizeof(FPerformanceCheckParam) == 0x000030, "Wrong size on FPerformanceCheckParam");
static_assert(offsetof(FPerformanceCheckParam, Map_21_6E815A7445D7A6E48842418A6C261310) == 0x000000, "Member 'FPerformanceCheckParam::Map_21_6E815A7445D7A6E48842418A6C261310' has a wrong offset!");
static_assert(offsetof(FPerformanceCheckParam, FallHeight_12_D742FDEC407C7C2715040499C606AD2B) == 0x000010, "Member 'FPerformanceCheckParam::FallHeight_12_D742FDEC407C7C2715040499C606AD2B' has a wrong offset!");
static_assert(offsetof(FPerformanceCheckParam, SplitNum_13_DA2E18694DDC0C21B4527B8B46B53004) == 0x000014, "Member 'FPerformanceCheckParam::SplitNum_13_DA2E18694DDC0C21B4527B8B46B53004' has a wrong offset!");
static_assert(offsetof(FPerformanceCheckParam, Distance_14_8429F2314414A0C6A86391B3B9485C7E) == 0x000018, "Member 'FPerformanceCheckParam::Distance_14_8429F2314414A0C6A86391B3B9485C7E' has a wrong offset!");
static_assert(offsetof(FPerformanceCheckParam, FallWaitTime_15_CFBE50BE46BF4E03DD0797AF6E10B3CA) == 0x00001C, "Member 'FPerformanceCheckParam::FallWaitTime_15_CFBE50BE46BF4E03DD0797AF6E10B3CA' has a wrong offset!");
static_assert(offsetof(FPerformanceCheckParam, Center_18_6618654A4F67AB4D02E60AB3DADE26A4) == 0x000020, "Member 'FPerformanceCheckParam::Center_18_6618654A4F67AB4D02E60AB3DADE26A4' has a wrong offset!");

}

