#pragma once

 

// Package: PerformanceCheckLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct PerformanceCheckLocation.PerformanceCheckLocation
// 0x0020 (0x0020 - 0x0000)
struct FPerformanceCheckLocation final
{
public:
	class FString                                 Map_16_DFA608FB44D837194AF1FAABB9ACD9E6;           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                Position_14_30396F70418C7FD07DEAC98F7C0DC774;      // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FPerformanceCheckLocation) == 0x000008, "Wrong alignment on FPerformanceCheckLocation");
static_assert(sizeof(FPerformanceCheckLocation) == 0x000020, "Wrong size on FPerformanceCheckLocation");
static_assert(offsetof(FPerformanceCheckLocation, Map_16_DFA608FB44D837194AF1FAABB9ACD9E6) == 0x000000, "Member 'FPerformanceCheckLocation::Map_16_DFA608FB44D837194AF1FAABB9ACD9E6' has a wrong offset!");
static_assert(offsetof(FPerformanceCheckLocation, Position_14_30396F70418C7FD07DEAC98F7C0DC774) == 0x000010, "Member 'FPerformanceCheckLocation::Position_14_30396F70418C7FD07DEAC98F7C0DC774' has a wrong offset!");

}

