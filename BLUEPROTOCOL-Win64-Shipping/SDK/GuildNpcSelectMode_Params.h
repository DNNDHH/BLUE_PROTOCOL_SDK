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
	 * Function GuildNpcSelectMode.GuildNpcSelectMode_C.SetBannerText
	 */
	struct UGuildNpcSelectMode_C_SetBannerText_Params
	{
	public:
		class FText                                                BannerText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildNpcSelectMode.GuildNpcSelectMode_C.RefreshBannerText
	 */
	struct UGuildNpcSelectMode_C_RefreshBannerText_Params
	{	};

	/**
	 * Function GuildNpcSelectMode.GuildNpcSelectMode_C.ExecuteUbergraph_GuildNpcSelectMode
	 */
	struct UGuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7K3R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
