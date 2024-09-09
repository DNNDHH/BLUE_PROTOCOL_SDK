#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BannerIcon.BannerIcon_C.SetBanner
	 */
	struct UBannerIcon_C_SetBanner_Params
	{
	public:
		class FName                                                BannerName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BannerIcon.BannerIcon_C.OnLoaded_4B7E5655474594DCF8A223A5CD904BF3
	 */
	struct UBannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BannerIcon.BannerIcon_C.BannerLoadStart
	 */
	struct UBannerIcon_C_BannerLoadStart_Params
	{	};

	/**
	 * Function BannerIcon.BannerIcon_C.Construct
	 */
	struct UBannerIcon_C_Construct_Params
	{	};

	/**
	 * Function BannerIcon.BannerIcon_C.ExecuteUbergraph_BannerIcon
	 */
	struct UBannerIcon_C_ExecuteUbergraph_BannerIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GAL5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
